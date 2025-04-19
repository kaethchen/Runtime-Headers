@class SEMAdministrator, CKVTaskManager, NSObject, CKVTaskSettings;
@protocol OS_dispatch_queue;

@interface CKVAdminServiceConnection : NSObject <CKVAdminService> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CKVTaskManager *_taskManager;
    SEMAdministrator *_semAdministrator;
    CKVTaskSettings *_settings;
}

- (void).cxx_destruct;
- (BOOL)_isCustomerInstall:(id /* block */)a0;
- (oneway void)beginEvaluation:(id)a0 clean:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)captureVocabularySnapshot:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteAllItemsWithUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteAllItemsWithUserId:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)finishEventSimulation:(id /* block */)a0;
- (oneway void)handleTask:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (id)initWithServiceQueue:(id)a0 taskManager:(id)a1 semAdministrator:(id)a2;
- (oneway void)rebuildSpeechProfileForUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)startEventSimulation:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)triggerMaintenance:(id /* block */)a0;
- (oneway void)triggerMigration:(BOOL)a0 completeAfterTrigger:(BOOL)a1 completion:(id /* block */)a2;

@end
