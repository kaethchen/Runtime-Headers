@interface AMSCB1PAcceptPrivacy : AMSCB1PBridgeDependent {
    struct shared_ptr<AMSCoreBridge::PrivacyProvider> { struct PrivacyProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _privacyProvider;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
