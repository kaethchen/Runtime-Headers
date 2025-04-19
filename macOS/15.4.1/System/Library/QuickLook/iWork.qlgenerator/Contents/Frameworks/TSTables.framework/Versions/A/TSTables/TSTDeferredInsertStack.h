@interface TSTDeferredInsertStack : NSObject {
    struct vector<TSTExprNodeInsertWork, std::allocator<TSTExprNodeInsertWork>> { struct TSTExprNodeInsertWork *__begin_; struct TSTExprNodeInsertWork *__end_; struct __compressed_pair<TSTExprNodeInsertWork *, std::allocator<TSTExprNodeInsertWork>> { struct TSTExprNodeInsertWork *__value_; } __end_cap_; } _deferredWorkStack;
}

@property (nonatomic) BOOL includeWhitespace;
@property (readonly, nonatomic) BOOL isEmpty;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)push:(const struct TSTExprNodeInsertWork { id x0; unsigned long long x1; } *)a0;
- (void)pop;
- (const struct TSTExprNodeInsertWork { id x0; unsigned long long x1; } *)top;

@end
