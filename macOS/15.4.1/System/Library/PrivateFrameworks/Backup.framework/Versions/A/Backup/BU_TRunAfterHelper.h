@class NSString;

@interface BU_TRunAfterHelper : NSObject <TMarkTornDown> {
    struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { struct __compressed_pair<fstd::callable_details::callable_holder_base<void> *, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__value_; } __ptr_; } fCallableHolder; } _functor;
    BOOL _onMainThread;
    BU_TRunAfterHelper *_strongSelf;
    struct TSpinLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSpinLock; } _strongSelfRunAfterLock;
    BOOL _cancelled;
}

@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct TNSWeakPtr<BU_TRunAfterHelper> { id x0; })postFunctor:(void *)a0 delayInSec:(double)a1 onMainThread:(BOOL)a2;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (void)cancel:(BOOL)a0;
- (id)initWithFunctor:(void *)a0 onMainThread:(BOOL)a1;
- (void)post;

@end
