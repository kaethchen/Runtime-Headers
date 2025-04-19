@interface AMSCB1PAccountServerImageProvider : AMSCB1PBridgeDependent {
    struct optional<AMSCore::BagService> { union { char __null_state_; struct BagService { struct shared_ptr<AMSCore::BagDataSource> { struct BagDataSource *__ptr_; struct __shared_weak_count *__cntrl_; } mDataSource; struct shared_ptr<AMSCore::BagService::MutableBagContext> { struct MutableBagContext *__ptr_; struct __shared_weak_count *__cntrl_; } mMutableBagContext; } __val_; } ; BOOL __engaged_; } _bagService;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
