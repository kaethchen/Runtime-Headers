@class NSString;

@interface _TtCs12_SwiftObject <NSObject> {
    Class isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isDeallocating;
+ (void)release;
+ (BOOL)_tryRetain;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)allowsWeakReference;
+ (id)autorelease;
+ (Class)class;
+ (BOOL)conformsToProtocol:(id)a0;
+ (id)debugDescription;
+ (id)description;
+ (void)initialize;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (id)retain;
+ (unsigned long long)retainCount;
+ (BOOL)retainWeakReference;
+ (Class)superclass;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)isProxy;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (BOOL)_tryRetain;
- (BOOL)allowsWeakReference;
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)self;
- (struct _NSZone { } *)zone;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSDate__;
- (BOOL)isNSNumber__;
- (BOOL)isNSString__;
- (unsigned long long)_cfTypeID;
- (id)_copyDescription;
- (BOOL)isNSArray__;
- (BOOL)isNSData__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSObject__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSSet__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;

@end
