@class TSCEValue, __end_cap_, __end_;

@interface TSCEValueBindingEnvironment : NSObject <NSCopying> {
    struct vector<TSCEValueBindings *, std::allocator<TSCEValueBindings *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEValueBindings *__strong *, std::allocator<TSCEValueBindings *>> { id *__value_; } x1; } _bindings;
    TSCEValue *_syntaxErrorValue;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)lookup:(const unsigned int *)a0;
- (void)bindValue:(id)a0 atSymbol:(const unsigned int *)a1;
- (id)currentBindingsDebug;
- (void)popScope;
- (void)pushScope;

@end
