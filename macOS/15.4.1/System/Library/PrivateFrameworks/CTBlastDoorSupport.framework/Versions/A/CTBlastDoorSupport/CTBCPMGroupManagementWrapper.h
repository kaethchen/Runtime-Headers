@interface CTBCPMGroupManagementWrapper : NSObject

@property (readonly, nonatomic) struct optional<ctb::CPMGroupManagement> { union { char __null_state_; struct CPMGroupManagement { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } fId; struct optional<ctb::CPMGroupManagement::Response> { union { char __null_state_; struct Response { unsigned int fResponseCode; } __val_; } ; BOOL __engaged_; } fResponse; } __val_; } ; BOOL __engaged_; } wrapped;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWrapped:(struct optional<ctb::CPMGroupManagement> { union { char x0; struct CPMGroupManagement { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; struct optional<ctb::CPMGroupManagement::Response> { union { char x0; struct Response { unsigned int x0; } x1; } x0; BOOL x1; } x1; } x1; } x0; BOOL x1; })a0;

@end
