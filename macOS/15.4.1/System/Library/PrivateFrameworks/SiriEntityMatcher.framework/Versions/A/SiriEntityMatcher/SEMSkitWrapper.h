@class NSURL;

@interface SEMSkitWrapper : NSObject {
    NSURL *_skitDirectoryURL;
    struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } __pn_; } _skitDirectoryPath;
    struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } __pn_; } _nameTriePath;
    struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } __pn_; } _aliasTriePath;
}

@property (readonly, nonatomic) struct shared_ptr<semskitbridge::Searcher> { struct Searcher *__ptr_; struct __shared_weak_count *__cntrl_; } searcher;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)teardown;
- (void)boostrap;
- (id)initWithSkitDirectoryURL:(id)a0;
- (id)readInfo;

@end
