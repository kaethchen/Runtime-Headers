@class FCJSONRecordSourceSchema, NFLazy;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NFLazy *dateFormatter;

- (void).cxx_destruct;
- (id)recordType;
- (void)fetchRecordsWithIDs:(id)a0 completion:(id /* block */)a1;
- (id)keyValueRepresentationOfRecord:(id)a0;
- (id)localizableKeys;
- (id)alwaysLocalizedKeys;
- (void)fetchRecordsWithIDs:(id)a0 cachePolicy:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)initWithSchema:(id)a0 contentDatabase:(id)a1 contentDirectory:(id)a2 experimentationSuffix:(id)a3 activeTreatmentID:(id)a4;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordIDPrefixes;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
