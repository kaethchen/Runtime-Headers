@interface BU_TRunSoonHelper : NSObject {
    struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { struct __compressed_pair<fstd::callable_details::callable_holder_base<void> *, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__value_; } __ptr_; } fCallableHolder; } _functor;
    int _dispatchType;
}

+ (void)postFunctor:(void *)a0 andDispatchType:(int)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dispatch;
- (id)initWithFunctor:(void *)a0 andDispatchType:(int)a1;
- (void)post;
- (void)repost;

@end
