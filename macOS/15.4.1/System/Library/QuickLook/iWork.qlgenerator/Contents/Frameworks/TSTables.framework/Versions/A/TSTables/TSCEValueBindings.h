@class __end_cap_, __end_;

@interface TSCEValueBindings : NSObject <NSCopying> {
    struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEValue *__strong *, std::allocator<TSCEValue *>> { id *__value_; } x1; } _valuesBySymbol;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)lookup:(const unsigned int *)a0;
- (void)bindValue:(id)a0 atSymbol:(const unsigned int *)a1;

@end
