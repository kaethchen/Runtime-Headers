@class NSDictionary, NSString;

@interface MTLModel : NSObject <NSCoding, MTLModel>

@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)modelVersion;
+ (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
+ (id)propertyKeys;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)modelWithDictionary:(id)a0 error:(id *)a1;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)a0;
+ (id)dictionaryValueFromArchivedExternalRepresentation:(id)a0 version:(unsigned long long)a1;
+ (id)encodingBehaviorsByPropertyKey;
+ (void)generateAndCacheStorageBehaviors;
+ (id)permanentPropertyKeys;
+ (id)transitoryPropertyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)validate:(id *)a0;
- (id)decodeValueForKey:(id)a0 withCoder:(id)a1 modelVersion:(unsigned long long)a2;
- (void)mergeValueForKey:(id)a0 fromModel:(id)a1;
- (void)mergeValuesForKeysFromModel:(id)a0;

@end
