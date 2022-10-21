#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__

#include<iterator>
#include<type_traits>
#include<utility>
#include<memory>
#include<initializer_list>
#include<algorithm>
#include<numeric>
#include<execution>
#include<limits>

namespace mylib {

	template<typename Ty>
	struct _vector_iterator {
		using value_type = std::remove_cv_t<Ty>;
		using pointer = Ty*;
		using reference = Ty&;

		[[nodiscard]] constexpr reference operator*()const noexcept {
			return *_ptr;
		}

		[[nodiscard]] constexpr pointer operator->()const noexcept {
			return _ptr;
		}

		[[nodiscard]] constexpr _vector_iterator& operator++()noexcept {
			++_ptr;
			return *this;
		}

		constexpr _vector_iterator operator++(int)noexcept {
			_vector_iterator tmp{ *this };
			++* this;
			return tmp;
		}

		constexpr _vector_iterator& operator--()noexcept {
			--_ptr;
			return *this;
		}

		constexpr _vector_iterator operator--(int)noexcept {
			_vector_iterator tmp{ *this };
			--* this;
			return tmp;
		}

		[[nodiscard]] constexpr _vector_iterator operator+(size_t n)const noexcept {
			_vector_iterator tmp{ *this };
			tmp._ptr += n;
			return tmp;
		}

		[[nodiscard]] constexpr _vector_iterator operator-(size_t n)const noexcept {
			_vector_iterator tmp{ *this };
			tmp._ptr -= n;
			return tmp;
		}

		[[nodiscard]] friend constexpr bool operator==(const _vector_iterator& v1, const _vector_iterator& v2) {
			return v1._ptr == v2._ptr;
		}

		[[nodiscard]] friend constexpr bool operator!=(const _vector_iterator& v1, const _vector_iterator& v2) {
			return !(v1 == v2);
		}

		pointer _ptr = nullptr;

	};

	template<typename Ty, typename Alloc = std::allocator<Ty>>
	class vector {
	public:

		using value_type				= Ty;
		using allocator_type			= Alloc;
		using size_type					= std::allocator_traits<Alloc>::size_type;
		using difference_type			= std::allocator_traits<Alloc>::difference_type;
		using reference					= value_type&;
		using const_reference			= const value_type&;
		using pointer					= std::allocator_traits<Alloc>::pointer;
		using const_pointer				= std::allocator_traits<Alloc>::const_pointer;
		using iterator					= _vector_iterator<Ty>;
		using const_iterator			= const _vector_iterator<Ty>;
		using reverse_iterator			= std::reverse_iterator<iterator>;
		using const_reverse_iterator	= std::reverse_iterator<const_iterator>;


		explicit vector(size_t init_size = 0) :_size{ init_size }, _capacity{ 0 }, _ptr{ nullptr } {
			reserve(init_size);
		}
		vector(const vector& rhs) :_size{ rhs._size }, _capacity{ 0 }, _ptr{ nullptr } {
			reserve(rhs.capacity());
		}

		constexpr ~vector() {
			_allocator.deallocate(_ptr, _capacity);
		}

		constexpr vector& operator=(const vector& other) {

		}

		constexpr vector& operator=(vector&& other) {

		}

		template<typename T>
		constexpr void assign(size_type count, const T& value) {
			reserve(count);
			std::fill(begin(), begin() + count, value);
		}

		template< class InputIt, std::enable_if_t<std::_Is_iterator_v<InputIt>, int> = 0>
		constexpr void assign(InputIt first, InputIt last) {
			ptrdiff_t di = std::distance(first, last);
			reserve(di);
			std::copy(first, last, begin());
		}

		template<typename T>
		constexpr void assign(std::initializer_list<T> ilist) {
			reserve(ilist.size());
			std::copy(ilist.begin(), ilist.end(), begin());
		}

		constexpr allocator_type get_allocator() const noexcept {
			return _allocator;
		}

		constexpr reference at(size_type pos) {
			return !(pos < _size) ? throw std::out_of_range : _ptr[pos];
		}
		constexpr const_reference at(size_type pos) const {
			return !(pos < _size) ? throw std::out_of_range("out_of_range") : _ptr[pos];
		}

		constexpr reference operator[](size_type pos) {
			return _ptr[pos];
		}

		constexpr const_reference operator[](size_type pos) const {
			return _ptr[pos];
		}

		constexpr reference front() {
			return _ptr[0];
		}

		constexpr const_reference front() const {
			return _ptr[0];
		}

		constexpr const_reference back() const {
			return _ptr[_size - 1];
		}

		constexpr reference back() {
			return _ptr[_size - 1];
		}

		constexpr pointer data() noexcept {
			return _ptr;
		}

		constexpr const_pointer data()const noexcept {
			return _ptr;
		}

		[[nodiscard]] constexpr iterator begin()noexcept{
			return { _ptr };
		}

		[[nodiscard]] constexpr const_iterator cbegin()const noexcept {
			return { _ptr };
		}

		[[nodiscard]] constexpr reverse_iterator rbegin()noexcept {
			return reverse_iterator(end());
		}

		[[nodiscard]] constexpr reverse_iterator crbegin()noexcept {
			return reverse_iterator(cend());
		}

		[[nodiscard]] constexpr iterator end()noexcept {
			return { _ptr + _size };
		}

		[[nodiscard]] constexpr const_iterator cend()const noexcept {
			return { _ptr + _size };
		}

		[[nodiscard]] constexpr reverse_iterator rend()noexcept {
			return reverse_iterator(begin());
		}

		[[nodiscard]] constexpr const_reverse_iterator crend()noexcept {
			return reverse_iterator(cbegin());
		}

		[[nodiscard]] constexpr bool empty() const noexcept {
			return begin() == end();
		}

		constexpr size_type size() const noexcept {
			return _size;
		}

		constexpr size_type max_size() const noexcept {
			return std::numeric_limits<difference_type>::max();
		}

		constexpr size_type capacity() const noexcept {
			return _capacity;
		}

		constexpr void reserve(size_type new_cap) {
			if (new_cap <= capacity())
				return;
			pointer tmp = _ptr;
			_ptr = _allocator.allocate(new_cap);
			if (_ptr != nullptr && tmp != nullptr) {
				std::copy(tmp, tmp + size(), _ptr);
				_allocator.deallocate(tmp, _capacity);
			}
			_capacity = new_cap;
		}

		constexpr void shrink_to_fit() {

		}

	private:
		pointer _ptr;
		size_type _size;
		size_type _capacity;
		allocator_type _allocator;
	};

}
#endif // !__VECTOR_HPP