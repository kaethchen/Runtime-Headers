@interface HALB_TailspinImpl : NSObject

+ (struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; } x0; BOOL x1; })dumpTailspinSync:(unsigned long long)a0 forReason:(id)a1;
+ (BOOL)enableTailspinSync;
+ (id)initOptionsDictionary;
+ (void)prepareDumpOptions:(unsigned long long)a0 outDict:(id *)a1;

@end
