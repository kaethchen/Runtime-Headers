@interface AXBWeakReferenceContainer : NSObject <NSCopying> {
    id _weakReference;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (id)strongReference;
- (id)autoreleasedReference;

@end
