@interface AMSCB1PBagServiceObservationToken : AMSCB1PBridgeDependent {
    struct ObserverToken { struct shared_ptr<const AMSCore::Subject<AMSCore::MapUtils::UpdateDiff<std::string>>::Observer> { struct Observer *__ptr_; struct __shared_weak_count *__cntrl_; } mObserver; } _coreToken;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
