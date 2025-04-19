@interface EKPersistentColor : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (void)setData:(id)a0;
- (id)UUID;
- (id)providerIdentifier;
- (void)setProviderIdentifier:(id)a0;
- (id)source;
- (void)setUUID:(id)a0;
- (void)setSource:(id)a0;
- (id)externalID;
- (void)setExternalID:(id)a0;
- (int)entityType;
- (BOOL)allowsDeletion;

@end
