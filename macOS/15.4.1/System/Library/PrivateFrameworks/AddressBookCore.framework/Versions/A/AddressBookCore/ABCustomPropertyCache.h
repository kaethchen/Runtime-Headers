@class NSMutableDictionary;

@interface ABCustomPropertyCache : NSObject {
    NSMutableDictionary *_propertiesByNameByRecordTypeByPersistentStore;
}

+ (id)storeIdentifierForStore:(id)a0;

- (void)dealloc;
- (id)init;
- (void)accountRepositoryDidChange:(id)a0;
- (void)cacheCustomProperties:(id)a0 withRecordType:(id)a1;
- (id)cachedCustomPropertiesByNameForRecordType:(id)a0 persistentStore:(id)a1;
- (void)clearCustomPropertyCaches;
- (id)customPropertyDescriptionWithName:(id)a0 recordType:(id)a1 inContext:(id)a2 persistentStore:(id)a3;
- (id)customPropertyDescriptionsByNameWithRecordType:(id)a0 inManagedObjectContext:(id)a1 persistentStore:(id)a2;
- (id)customPropertyDescriptionsWithRecordType:(id)a0 inContext:(id)a1 persistentStore:(id)a2;
- (id)customPropertyWithName:(id)a0 recordType:(id)a1 inContext:(id)a2 persistentStore:(id)a3;
- (void)nts_cacheCustomProperty:(id)a0 forPropertyName:(id)a1 recordType:(id)a2 persistentStoreIdentifier:(id)a3;
- (id)nts_propertiesByNameByRecordTypeForstoreIdentifier:(id)a0;
- (id)nts_propertiesByNameForRecordType:(id)a0 inPropertiesByNameByRecordType:(id)a1;

@end
