@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserZones : NSObject {
    NSMutableDictionary *_zoneNameToRecords;
}

- (id)init;
- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)addRecord:(id)a0;
- (id)allRecords;
- (void)removeIdentifiers:(id)a0;

@end
