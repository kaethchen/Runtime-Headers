@class AMSCB1PBundleInfo;

@interface AMSCB1PBridge : NSObject {
    struct tuple<std::string, std::string> { struct __tuple_impl<std::__1::__tuple_indices<0, 1>, std::string, std::string> { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } __value_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } __value_; } __base_; } _metricsBagProfile;
    AMSCB1PBundleInfo *_metricsBundleInfo;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
