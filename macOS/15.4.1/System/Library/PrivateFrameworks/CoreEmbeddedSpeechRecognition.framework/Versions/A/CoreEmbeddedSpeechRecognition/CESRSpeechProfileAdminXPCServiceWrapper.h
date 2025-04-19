@class NSString, CESRSpeechProfileAdminXPCServiceBridge;

@interface CESRSpeechProfileAdminXPCServiceWrapper : NSObject <CESRSpeechProfileAdminServiceProvider, CESRSpeechProfileAdminService> {
    CESRSpeechProfileAdminXPCServiceBridge *_xpcServiceBridge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)adminService;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)rebuildSpeechProfileForUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)triggerMaintenance:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)beginEvaluationWithSetEnumerator:(id)a0 completion:(id /* block */)a1;

@end
