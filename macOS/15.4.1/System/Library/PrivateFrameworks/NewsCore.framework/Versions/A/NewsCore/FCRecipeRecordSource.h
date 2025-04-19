@interface FCRecipeRecordSource : FCRecordSource

- (id)recordType;
- (id)alwaysLocalizedKeys;
- (id)articleTopicsFromCKRecord:(id)a0 topicIDs:(id)a1 topicFlags:(id)a2;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordIDPrefixes;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
