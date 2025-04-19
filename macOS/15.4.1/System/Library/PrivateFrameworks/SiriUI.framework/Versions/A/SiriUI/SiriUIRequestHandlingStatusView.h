@class NSView, NSString;

@interface SiriUIRequestHandlingStatusView : SiriSharedUIStandardView {
    NSView *_asrStatusView;
    NSView *_executionStatusView;
    NSString *_currentASRStatus;
    NSString *_currentExecutionStatus;
}

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)handleRequestHandlingStatus:(id)a0;

@end
