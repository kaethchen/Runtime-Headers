@interface SSRRPISamplingXPCService : NSObject

+ (void)markFinishForAllSamplingStatus:(id /* block */)a0;
+ (id)getAudioIdWithRequestId:(id)a0 languageCode:(id)a1 date:(id)a2 error:(id *)a3;
+ (unsigned long long)getEnrollmentSelectionStatusWithLocale:(id)a0 error:(id *)a1;
+ (void)removeAllSamplingMetaDataWithCompletion:(id /* block */)a0;
+ (void)removeMappingWithLocale:(id)a0 date:(id)a1 completion:(id /* block */)a2;
+ (void)removeRequestIdToAudioIdMappingWithError:(id *)a0;
+ (void)updateStatus:(id)a0 languageCode:(id)a1 completion:(id /* block */)a2;
+ (void)writeIntoMappingWithRequestId:(id)a0 audioId:(id)a1 date:(id)a2 locale:(id)a3 completion:(id /* block */)a4;

@end
