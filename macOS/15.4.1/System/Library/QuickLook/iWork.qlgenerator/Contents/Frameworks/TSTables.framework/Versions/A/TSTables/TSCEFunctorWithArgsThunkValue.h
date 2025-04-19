@class __end_, __end_cap_, TSCEFormulaObject;

@interface TSCEFunctorWithArgsThunkValue : TSCEValue {
    struct TSCEFunctor { TSCEFormulaObject *_formula; unsigned int _numArgs; unsigned int _firstSymbol; } _functor;
    struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEValue *__strong *, std::allocator<TSCEValue *>> { id *__value_; } x1; } _arguments;
}

@property (nonatomic) unsigned char rangeContextOverride;

+ (id)functorWithArgsValue:(const struct TSCEFunctor { id x0; unsigned int x1; unsigned int x2; } *)a0 args:(const void *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (const void *)arguments;
- (id).cxx_construct;
- (id)asGrid:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 applyPreferredFormat:(BOOL)a3 outError:(id *)a4;
- (char)nativeType;
- (const struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)ast;
- (BOOL)asBoolean:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asDate:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asFunctorWithArgsThunkValue;
- (id)asNumber:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (struct TSCERichTextStorage { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; })asRawRichTextStorage:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asRawString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (struct TSCERichTextStorage { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; })asRichTextStorage:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)evaluateThunk:(id)a0;
- (unsigned int)firstSymbol;
- (id)initWithFunctor:(const struct TSCEFunctor { id x0; unsigned int x1; unsigned int x2; } *)a0 args:(const void *)a1;
- (BOOL)isFunctorWithArgsThunkValue;
- (unsigned long long)uniqueFunctorKey;

@end
