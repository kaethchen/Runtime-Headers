@interface EKPersistentImage : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)name;
- (id)identifier;
- (void)setName:(id)a0;
- (void)setType:(long long)a0;
- (long long)type;
- (void)setIdentifier:(id)a0;
- (id)source;
- (void)setSource:(id)a0;
- (int)entityType;
- (id)colorData;
- (void)setColorData:(id)a0;

@end
