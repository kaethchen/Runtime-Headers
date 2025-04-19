@interface BPFeedbackListener : NSObject <BPFeedbackListenerProtocol, SFFeedbackListener>

- (id)init;
- (void)sendResultSectionsDidLoadFeedback:(id)a0;

@end
