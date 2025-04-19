@class CESRSpeechProfileSiteResolver, NSObject;
@protocol OS_dispatch_queue;

@interface CESRSpeechProfileAdminServiceConnection : NSObject <CESRSpeechProfileAdminService> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CESRSpeechProfileSiteResolver *_speechProfileSiteManager;
}

- (void).cxx_destruct;
- (BOOL)_isCustomerInstall:(id /* block */)a0;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)rebuildSpeechProfileForUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)triggerMaintenance:(BOOL)a0 completion:(id /* block */)a1;
- (void)_clearAllState;
- (long long)_deleteUserExclusiveSitesWithUserId:(id)a0;
- (oneway void)beginEvaluationWithSetEnumerator:(id)a0 completion:(id /* block */)a1;
- (id)initWithServiceQueue:(id)a0 speechProfileSiteManager:(id)a1;

@end
