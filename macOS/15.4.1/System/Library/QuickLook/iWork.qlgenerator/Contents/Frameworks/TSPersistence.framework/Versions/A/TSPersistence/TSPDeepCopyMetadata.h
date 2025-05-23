@class NSDictionary, TSPComponentObjectUUIDMap;

@interface TSPDeepCopyMetadata : TSPObject

@property (readonly, nonatomic) long long rootObjectIdentifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) TSPComponentObjectUUIDMap *componentObjectUUIDMap;
@property (readonly, nonatomic) NSDictionary *cachedDataMap;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithRootObject:(id)a0 version:(unsigned long long)a1 readVersion:(unsigned long long)a2 componentObjectUUIDMap:(id)a3 cachedDataMap:(id)a4;

@end
