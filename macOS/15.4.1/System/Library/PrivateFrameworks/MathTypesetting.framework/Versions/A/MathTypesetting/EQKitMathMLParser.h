@class NSError, EQKitEnvironment, NSData;

@interface EQKitMathMLParser : NSObject {
    struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *mRootNode;
    EQKitEnvironment *mEnvironment;
    NSData *mSource;
    struct stack<EQKitMathMLParserState, std::deque<EQKitMathMLParserState>> { struct deque<EQKitMathMLParserState, std::allocator<EQKitMathMLParserState>> { struct __split_buffer<EQKitMathMLParserState *, std::allocator<EQKitMathMLParserState *>> { int **__first_; int **__begin_; int **__end_; struct __compressed_pair<EQKitMathMLParserState **, std::allocator<EQKitMathMLParserState *>> { int **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<EQKitMathMLParserState>> { unsigned long long __value_; } __size_; } c; } mState;
    void *mAttributeCollection;
    struct basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> { struct __compressed_pair<std::basic_string<wchar_t>::__rep, std::allocator<wchar_t>> { union __rep { struct __short { int __data_[5]; unsigned char __padding_[3]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { int *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } mAttribution;
}

@property (readonly, nonatomic) struct _xmlNs { struct _xmlNs *x0; int x1; char *x2; char *x3; void *x4; struct _xmlDoc *x5; } *ns;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) void *attributeCollection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)state;
- (id).cxx_construct;
- (id)environment;
- (id)parse;
- (void)popState;
- (id)parseChildrenAsNodeFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (BOOL)isElement:(int)a0 allowedInState:(int)a1;
- (void)parseAttributesForNode:(id)a0 withXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;
- (id)parseChildrenAsArrayFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (id)parseChildrenAsTokenContentFromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (id)parseNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (void)pushState:(int)a0;
- (void)reportError:(long long)a0 withNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;
- (id)initWithDocument:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 node:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 source:(id)a2 attribution:(id)a3 environment:(id)a4;
- (id)sourceAttributionForOffset:(unsigned long long)a0 length:(unsigned long long)a1;

@end
