@interface __SwiftNativeNSDictionaryBase : NSDictionary {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (BOOL)_tryRetain;
- (BOOL)allowsWeakReference;
- (id)autorelease;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)initWithCoder:(id)a0;

@end
