@class FINode;

@interface DSFileProgress : NSObject {
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct __compressed_pair<TKeyValueObserver *, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__value_; } __end_cap_; } _observers;
}

@property (weak) FINode *progressNode;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (void)startObserving:(id)a0;
- (void)progressChanged:(id)a0;

@end
