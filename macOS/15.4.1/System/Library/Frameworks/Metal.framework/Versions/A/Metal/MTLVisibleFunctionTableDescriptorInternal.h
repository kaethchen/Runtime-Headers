@interface MTLVisibleFunctionTableDescriptorInternal : MTLVisibleFunctionTableDescriptor {
    struct MTLVisibleFunctionTableDescriptorPrivate { unsigned long long functionCount; BOOL forceResourceIndex; unsigned long long resourceIndex; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)functionCount;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(BOOL)a0;
- (void)setResourceIndex:(unsigned long long)a0;
- (BOOL)forceResourceIndex;
- (void)setFunctionCount:(unsigned long long)a0;

@end
