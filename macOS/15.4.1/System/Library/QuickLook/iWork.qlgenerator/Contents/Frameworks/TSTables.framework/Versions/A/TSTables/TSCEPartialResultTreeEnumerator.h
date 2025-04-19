@class TSCEPartialResultTree, __end_cap_, TSCEPartialResult, __end_;

@interface TSCEPartialResultTreeEnumerator : NSObject {
    TSCEPartialResultTree *_tree;
    struct vector<TSCEPartialResult *, std::allocator<TSCEPartialResult *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEPartialResult *__strong *, std::allocator<TSCEPartialResult *>> { id *__value_; } x1; } _inProgressStack;
    TSCEPartialResult *_lastResult;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setCurrentResult:(id)a0;
- (id)nextResult;
- (id)initWithPartialResultTree:(id)a0;

@end
