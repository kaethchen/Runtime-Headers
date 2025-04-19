@interface FI_TTargetActionFunctor : NSObject {
    struct variant<fstd::unique_function<void ()>, std::function<void ()>> { struct __impl<fstd::unique_function<void ()>, std::function<void ()>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, fstd::unique_function<void ()>, std::function<void ()>> { char __dummy; struct __alt<0UL, fstd::unique_function<void ()>> { struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { struct __compressed_pair<fstd::callable_details::callable_holder_base<void> *, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__value_; } __ptr_; } fCallableHolder; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, std::function<void ()>> { char __dummy; struct __alt<1UL, std::function<void ()>> { struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _functor;
}

+ (id)target:(id)a0 withFunctor:(const void *)a1;
+ (id)target:(id)a0 withOneShotFunctor:(void *)a1;
+ (id)withFunctor:(const void *)a0;
+ (id)withOneShotFunctor:(void *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)action:(id)a0;
- (void)bindTarget:(id)a0;
- (id)initWithFunctor:(const void *)a0;
- (id)initWithOneShotFunctor:(void *)a0;

@end
