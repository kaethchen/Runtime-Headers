@class NSMutableDictionary, NSObject;
@protocol CCDatabaseReadOnlyAccess;

@interface CCDatabaseSetStateReader : NSObject {
    NSObject<CCDatabaseReadOnlyAccess> *_databaseAccess;
    unsigned char _siteIdentifierFormat;
    NSMutableDictionary *_commandCache;
}

+ (id)persistedKeyValueForKey:(id)a0 database:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)constructDeviceMapping:(id *)a0;
- (BOOL)constructStateVectorsFromDatabaseWithDeviceMapping:(id)a0 outContent:(id *)a1 outMetaContent:(id *)a2 error:(id *)a3;
- (BOOL)enumerateProvenanceRecordsForStateVector:(id)a0 withType:(unsigned char)a1 selectAtomsInState:(unsigned char)a2 skipOverAtomsInState:(unsigned char)a3 deviceMapping:(id)a4 error:(id *)a5 usingBlock:(id /* block */)a6;
- (id)fetchContentRecordFromContentHash:(id)a0;
- (id)initWithDatabaseAccess:(id)a0 siteIdentifierFormat:(unsigned char)a1;
- (id)_createProvenanceSelectCommandFromDeviceRowIdToClockValues:(id)a0 type:(unsigned char)a1 state:(unsigned char)a2 columns:(id)a3;
- (BOOL)_enumerateProvenanceRecordsFromCommand:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (void)_resolveSequenceNumberRangesOfDeltaVector:(id)a0 appendToCriteria:(id)a1 seenStateVectorBuilder:(id)a2 deviceMapping:(id)a3 type:(unsigned char)a4;
- (id)itemInstanceCount:(id *)a0;
- (id)lastDeltaDate:(id *)a0;
- (id)provenanceRecordEnumeratorForContentDeltaVector:(id)a0 metaContentDeltaVector:(id)a1 seenContentBuilder:(id)a2 seenMetaContentBuilder:(id)a3 deviceMapping:(id)a4 error:(id *)a5;
- (id)sharedItemCount:(id *)a0;

@end
