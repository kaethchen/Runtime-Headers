@class NSMutableDictionary, NSMutableSet;

@interface SRFInvocationSuppressor : NSObject

@property (retain) NSMutableDictionary *voiceTriggerSuppressionsCountTable;
@property (retain) NSMutableSet *voiceTriggerSuppressingProcesses;
@property (retain) NSMutableSet *fullInvocationSuppressingProcesses;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_removeFullSuppressionsForConnection:(id)a0 withReason:(id)a1;
- (void)_removeVoiceTriggerSuppressionsFromProcessWithPID:(id)a0;
- (void)_resetFullSuppression;
- (void)_resetVoiceTriggerSuppression;
- (void)beginFullSuppressionActivityWithReason:(id)a0 forConnection:(id)a1;
- (void)beginVoiceTriggerSuppressionActivityWithReason:(id)a0 forPID:(id)a1;
- (void)endFullSuppressionActivityWithReason:(id)a0 forConnection:(id)a1;
- (void)endVoiceTriggerSuppressionActivityWithReason:(id)a0 forPID:(id)a1;
- (BOOL)isFullSuppressionEnabled;
- (void)verifyVoiceTriggerSuppressionState;

@end
