@interface AMSCB1PAccountProvider : AMSCB1PBridgeDependent {
    struct shared_ptr<AMSCore::IAccountProvider> { struct IAccountProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _provider;
    struct shared_ptr<AMSCore::IBundleInfo> { struct IBundleInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _bundleInfo;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
