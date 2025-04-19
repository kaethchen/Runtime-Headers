@class NSObject;
@protocol OS_dispatch_queue;

@interface SSRRPISampler : NSObject <SSRRPISamplingXPCProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
+ (void)deleteAllRPISampledData;

- (id)init;
- (void).cxx_destruct;
- (void)_handleVoiceProfileRPICleanupEvent;
- (void)getActiveRequestIdsForLocale:(id)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)getAudioIdWithRequestId:(id)a0 languageCode:(id)a1 date:(id)a2 completion:(id /* block */)a3;
- (void)getEnrollmentSelectionStatusWithLocale:(id)a0 completion:(id /* block */)a1;
- (void)removeAllSamplingMetaDataWithCompletion:(id /* block */)a0;
- (void)removeMappingOnAndBefore:(id)a0 completion:(id /* block */)a1;
- (void)removeMappingWithLocale:(id)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)removeRequestIdToAudioIdMappingWithCompletion:(id /* block */)a0;
- (void)updateStatus:(id)a0 languageCode:(id)a1 completion:(id /* block */)a2;
- (void)writeIntoMappingWithRequestId:(id)a0 audioId:(id)a1 date:(id)a2 locale:(id)a3 completion:(id /* block */)a4;

@end
