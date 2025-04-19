@class NSString, NSDictionary;

@interface CNCoreDataPropertyMapping : NSObject <CNRecordCoreDataPredicateMapping>

@property (readonly, copy, nonatomic) NSString *coreDataPredicateKeyPath;
@property (readonly, nonatomic) NSDictionary *subCoreDataPredicatePropertiesByKey;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) long long coreDataBitMask;
@property (readonly, nonatomic) NSDictionary *coreDataBitMaskedValuesMap;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) BOOL isRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mappingWithCoreDataKeyPath:(id)a0 valueClass:(Class)a1;
+ (id)mappingWithCoreDataKeyPath:(id)a0 valueClass:(Class)a1 subProperties:(id)a2;

- (void).cxx_destruct;
- (id)initWithCoreDataKeyPath:(id)a0 valueClass:(Class)a1;
- (id)initWithCoreDataKeyPath:(id)a0 valueClass:(Class)a1 subProperties:(id)a2;

@end
