@interface _NSClassAndClassInfo : NSObject <NSCopying> {
    Class _registryClass;
    Class _objectClass;
    unsigned long long _registryClassHash;
    unsigned long long _objectClassHash;
    unsigned long long _hash;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setObjectClass:(Class)a0;
- (id)initWithRegistryClass:(Class)a0 andObjectClass:(Class)a1;
- (void)setRegistryClass:(Class)a0;

@end
