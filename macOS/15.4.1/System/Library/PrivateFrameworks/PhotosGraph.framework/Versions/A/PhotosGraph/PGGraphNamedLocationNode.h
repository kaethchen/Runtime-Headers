@class NSString, MANodeFilter;

@interface PGGraphNamedLocationNode : PGGraphLocationNode <MAUniquelyIdentifiableNode>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (id)filterWithName:(id)a0;
+ (id)filterWithUUID:(id)a0;
+ (id)filterBySettingNameNotEmptyPropertyOnFilter:(id)a0;
+ (void)setName:(id)a0 onLocationNodeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;
+ (void)setUUID:(id)a0 onLocationNodeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)featureIdentifier;
- (id)initWithName:(id)a0 uuid:(id)a1;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)propertyDictionary;

@end
