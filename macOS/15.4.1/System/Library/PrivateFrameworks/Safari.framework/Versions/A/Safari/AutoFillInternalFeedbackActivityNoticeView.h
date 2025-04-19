@class WBSAutoFillInternalFeedbackDiagnosticsData;

@interface AutoFillInternalFeedbackActivityNoticeView : ActivityNoticeView

@property (weak, nonatomic) id reportTarget;
@property (nonatomic) SEL reportAction;
@property (readonly, nonatomic) WBSAutoFillInternalFeedbackDiagnosticsData *diagnosticsData;

- (void).cxx_destruct;
- (void)_handleThumbsDown:(id)a0;
- (void)_handleThumbsUp:(id)a0;
- (unsigned long long)dismissalMode;
- (id)initWithDiagnosticsData:(id)a0 reportTarget:(id)a1 reportAction:(SEL)a2;

@end
