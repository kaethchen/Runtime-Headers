@interface SiriSharedUIFeedbackController : NSViewController

@property (nonatomic) void /* unknown type, empty encoding */ isProvidingFeedback;
@property (nonatomic, retain) void /* unknown type, empty encoding */ feedbackController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ evaluationResult;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)userDidReportConcernWithModel:(id)a0;

@end
