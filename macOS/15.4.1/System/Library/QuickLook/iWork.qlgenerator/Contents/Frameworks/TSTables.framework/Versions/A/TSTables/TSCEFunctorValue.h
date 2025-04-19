@class TSCEFormulaObject;

@interface TSCEFunctorValue : TSCEValue {
    struct TSCEFunctor { TSCEFormulaObject *_formula; unsigned int _numArgs; unsigned int _firstSymbol; } _functor;
}

+ (id)functorValue:(const struct TSCEFunctor { id x0; unsigned int x1; unsigned int x2; } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFunctor:(const struct TSCEFunctor { id x0; unsigned int x1; unsigned int x2; } *)a0;
- (char)nativeType;
- (const struct TSCEFunctor { id x0; unsigned int x1; unsigned int x2; } *)functor;
- (id)asFunctorValue;
- (id)asFunctorValue:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (BOOL)isFunctorValue;

@end
