@class NSPredicate;

@interface LSEnumerator : NSEnumerator <NSCopying> {
    id /* block */ _filter;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _hasFiredErrorHandler;
}

@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) id /* block */ filter;

+ (id)new;
+ (void)initialize;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)a0 options:(unsigned long long)a1 filter:(id /* block */)a2;
+ (id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)a0;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)a0 options:(unsigned long long)a1;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)nextObject;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0;
- (id)swift_firstWhere:(id /* block */)a0;
- (void)swift_forEach:(id /* block */)a0;

@end
