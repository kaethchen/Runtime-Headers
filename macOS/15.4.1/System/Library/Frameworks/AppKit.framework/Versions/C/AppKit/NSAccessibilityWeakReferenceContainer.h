@interface NSAccessibilityWeakReferenceContainer : NSObject <NSCopying> {
    unsigned long long _hash;
    id _weakReference;
    id _danglingReference;
    BOOL _hasWeakReference;
}

@property (readonly, weak) id object;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;

@end
