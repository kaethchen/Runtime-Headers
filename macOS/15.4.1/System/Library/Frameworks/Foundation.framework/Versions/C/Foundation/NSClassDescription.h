@class NSArray;

@interface NSClassDescription : NSObject

@property (readonly, copy) NSArray *attributeKeys;
@property (readonly, copy) NSArray *toOneRelationshipKeys;
@property (readonly, copy) NSArray *toManyRelationshipKeys;

+ (void)initialize;
+ (void)invalidateClassDescriptionCache;
+ (id)classDelegate;
+ (id)classDescriptionForClass:(Class)a0;
+ (void)registerClassDescription:(id)a0 forClass:(Class)a1;
+ (void)setClassDelegate:(id)a0;

- (id)allAttributeKeys;
- (id)allToManyRelationshipKeys;
- (id)allToOneRelationshipKeys;
- (id)classDescriptionForDestinationKey:(id)a0;
- (id)classDescriptionForKeyPath:(id)a0;
- (id)classPropertyKeys;
- (id)displayNameForKey:(id)a0;
- (id)entityName;
- (id)inverseForRelationshipKey:(id)a0;
- (BOOL)ownsDestinationObjectsForRelationshipKey:(id)a0;
- (id)validateValue:(id *)a0 forKey:(id)a1;

@end
