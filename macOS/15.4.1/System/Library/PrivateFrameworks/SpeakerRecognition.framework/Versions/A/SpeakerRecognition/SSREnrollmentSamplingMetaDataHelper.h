@interface SSREnrollmentSamplingMetaDataHelper : NSObject

+ (id)_convertToMetaDataDict:(id)a0;
+ (id)_getMetaDataForLocale:(id)a0 error:(id *)a1;
+ (id)_getMetaDataForLocale:(id)a0 metaDataDict:(id)a1 error:(id *)a2;
+ (id)_getVoiceProfileAndUpdateMetaDataWithLocale:(id)a0 error:(id *)a1;
+ (id)_getVoiceProfileWithEnrollmentId:(id)a0 error:(id *)a1;
+ (id)_getVoiceProfileWithLocale:(id)a0 error:(id *)a1;
+ (id)_loadMetaDataDict;
+ (id)_writeMetaData:(id)a0 locale:(id)a1;
+ (void)_writeMetaData:(id)a0 locale:(id)a1 completion:(id /* block */)a2;
+ (void)_writeMetaDataDict:(id)a0;
+ (id)getDonationDataWithEnrollmentId:(id)a0 error:(id *)a1;
+ (id)getDonationIdsWithEnrollmentId:(id)a0 error:(id *)a1;
+ (id)getEnrollmentDateWithLocale:(id)a0 error:(id *)a1;
+ (id)getEnrollmentIdWithLocale:(id)a0 error:(id *)a1;
+ (id)getEnrollmentMetaDataWithVoiceProfileId:(id)a0;
+ (unsigned long long)getEnrollmentSelectionStatusWithLocale:(id)a0 error:(id *)a1;
+ (void)removeAllSamplingMetaData;
+ (void)removeMetaDataWithVoiceProfileId:(id)a0 completion:(id /* block */)a1;
+ (void)updateSelectionStatus:(unsigned long long)a0 languageCode:(id)a1 completion:(id /* block */)a2;
+ (void)writeMetaDataWithSamplingSelectionStatus:(unsigned long long)a0 voiceProfileId:(id)a1 locale:(id)a2 completion:(id /* block */)a3;

@end
