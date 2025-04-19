@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserIdentifiers : NSObject {
    NSMutableDictionary *_identifierToParserZones;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)allRecords;
- (void)addRecord:(id)a0 identifier:(id)a1;
- (id)allRecordsWithIdentifier:(id)a0;
- (void)removeIdentifiers:(id)a0;

@end
