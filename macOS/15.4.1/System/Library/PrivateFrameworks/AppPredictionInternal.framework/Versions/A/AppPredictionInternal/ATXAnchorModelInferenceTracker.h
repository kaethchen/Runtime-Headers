@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearAllIncompleteInferenceEvents;
- (id)fetchPersistedInferenceEvents;
- (id)inferenceEventsToTryAgain;
- (void)persistInferenceEvent:(id)a0;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;

@end
