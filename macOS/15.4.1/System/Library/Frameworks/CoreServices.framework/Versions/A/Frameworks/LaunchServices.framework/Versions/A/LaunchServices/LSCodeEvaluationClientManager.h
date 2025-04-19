@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface LSCodeEvaluationClientManager : NSObject <LSCodeEvaluationClientProtocol>

@property (class, readonly) LSCodeEvaluationClientManager *sharedManager;

@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) NSMutableDictionary *connMap;
@property (retain) NSMutableDictionary *opMap;
@property (retain) NSMutableSet *evaluations;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } propertiesLock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)finishProgress:(id)a0;
- (void)updateProgress:(id)a0;
- (BOOL)_checkAllowed32BitHostProcess:(id)a0;
- (void)_cleanUpConnectionForUID:(unsigned int)a0;
- (void)_unregisterConnectionForUID:(unsigned int)a0;
- (id)connectionForUID:(unsigned int)a0;
- (void)ejectVolumeForInfo:(id)a0;
- (id)fetchOperationWithIdentifier:(id)a0;
- (BOOL)getUID:(unsigned int *)a0 forSystemProcessAlertsForUID:(unsigned int)a1;
- (void)handleProgressCancelForIdentifier:(id)a0;
- (void)handlePromptResponse:(long long)a0 info:(id)a1 identifier:(id)a2;
- (void)lockProperties;
- (void)moveItemToTrashForInfo:(id)a0;
- (void)moveItemToTrashForInfo:(id)a0 withReply:(id /* block */)a1;
- (id)opMapCopy;
- (BOOL)presentPromptOfType:(long long)a0 options:(long long)a1 info:(id)a2 completion:(id /* block */)a3;
- (void)registerEvaluation:(id)a0;
- (void)registerOperation:(id)a0;
- (void)registerWithLaunchServicesForInfo:(id)a0;
- (void)restoreOriginalNameAndIconForInfo:(id)a0;
- (void)showInFinderForInfo:(id)a0;
- (void)showInTestFlightForInfo:(id)a0;
- (void)showOriginForInfo:(id)a0;
- (void)showSecurityPreferencesForInfo:(id)a0 anchor:(id)a1;
- (void)startProgress:(id)a0;
- (void)unlockProperties;
- (void)unregisterEvaluation:(id)a0;
- (void)unregisterOperation:(id)a0;
- (BOOL)updateQuarantineFlagsForInfo:(id)a0 setFlags:(int)a1 clearFlags:(int)a2;

@end
