@interface AMSCB1PObserverWrapper : NSObject {
    struct ObserverToken { struct shared_ptr<const AMSCore::Subject<const std::string &, AMSCore::AccountChangedMetadata>::Observer> { struct Observer *__ptr_; struct __shared_weak_count *__cntrl_; } mObserver; } _observer;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
