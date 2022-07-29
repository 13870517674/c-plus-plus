//#include <algorithm>
//#include <iostream>
//#include <iterator>
//#include <vector>
//#include <forward_list>
//
//template <class ForwardIt>
//void quicksort(ForwardIt first, ForwardIt last)
//{
//    if (first == last) return;
//    auto pivot = *std::next(first, std::distance(first, last) / 2);
//    ForwardIt middle1 = std::partition(first, last,
//        [pivot](const auto& em) { return em < pivot; });
//    ForwardIt middle2 = std::partition(middle1, last,
//        [pivot](const auto& em) { return !(pivot < em); });
//    quicksort(first, middle1);
//    quicksort(middle2, last);
//}
//int main()
//{
//    std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
//    std::cout << "Original vector:\n    ";
//    for (int elem : v)
//        std::cout << elem << ' ';
//    
//    //it���Ƶ�Ϊһ����������vector<int>iterator����Ϊpartition�㷨���ص����������������������������ֵ�ĵ�ַ��һλ��(partition() ��������һ���������������ָ��������������ݵķֽ�λ��)
//    //partition�㷨�ᰴ�յ����������������У�����Ļ�����ֵ������˳������У�Ҳ����0 2 4 8�������ǰ�棬Ȼ��5 3 7 1 9������ķ������ǵĺ��棬it������ָ���Ҳ����5
//    auto it = std::partition(v.begin(), v.end(), [](int i) {return i % 2 == 0; });
//    std::cout << "\nPartitioned vector:\n    ";
//    
//    //std::begin(v)�൱��v.begin(),Ȼ��it����ǰ������Ҳ����ָ������Ҫ�����ݵĺ�һλ��end������copy����������ǿ���0 2 4 8
//    std::copy(std::begin(v), it, std::ostream_iterator<int>(std::cout, " "));
//    std::cout << " * ";
//    //std::end(v)�൱��v.end(),it��Ϊbegin��Ȼ��end��Ҳ����copy�ķ�Χ����������Ҫ�������
//    std::copy(it, std::end(v), std::ostream_iterator<int>(std::cout, " "));
//    
//    //forward_list������������list����������ǰ�ߵ�Ч�ʸ��ߣ��ǵ�����ĵײ㣬��֧��rbegin��rend��Щ�������������
//    std::forward_list<int> fl = { 1, 30, -4, 3, 5, -4, 1, 6, -8, 2, -5, 64, 1, 92 };
//    std::cout << "\nUnsorted list:\n    ";
//    for (int n : fl)
//        std::cout << n << ' ';
//    std::cout << '\n';
//
//    quicksort(std::begin(fl), std::end(fl));
//    std::cout << "Sorted using quicksort:\n    ";
//    for (int fi : fl) std::cout << fi << ' ';
//    std::cout << '\n';
//}