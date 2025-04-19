@interface AMSCB1PBagPolicy : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct SynchronousBagPolicy { BOOL permitPersistedData; struct ExpiredDataPermission { struct variant<std::monostate, std::optional<std::chrono::duration<long long>>> { struct __impl<std::monostate, std::optional<std::chrono::duration<long long>>> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, std::monostate, std::optional<std::chrono::duration<long long>>> { char __dummy; struct __alt<0UL, std::monostate> { struct monostate { } __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, std::optional<std::chrono::duration<long long>>> { char __dummy; struct __alt<1UL, std::optional<std::chrono::duration<long long>>> { struct optional<std::chrono::duration<long long>> { union { char __null_state_; struct duration<long long, std::ratio<1>> { long long __rep_; } __val_; } ; BOOL __engaged_; } __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL> { } __tail; } __tail; } __data; unsigned int __index; } __impl_; } mExpirationConfiguration; } expiredDataPermission; int mutability; } _corePolicy;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id).cxx_construct;

@end
