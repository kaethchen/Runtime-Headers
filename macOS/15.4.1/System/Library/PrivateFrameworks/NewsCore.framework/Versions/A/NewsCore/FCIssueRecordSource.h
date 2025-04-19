@interface FCIssueRecordSource : FCRecordSource

+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;
+ (BOOL)_useTaggedImages;

- (id)recordType;
- (id)localizableKeys;
- (id)alwaysLocalizedKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordIDPrefixes;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
