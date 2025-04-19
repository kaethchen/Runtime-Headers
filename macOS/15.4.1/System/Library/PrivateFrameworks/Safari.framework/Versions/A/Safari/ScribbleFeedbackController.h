@protocol WBSCloudFeedbackSource;

@interface ScribbleFeedbackController : FeedbackAlertController

@property (weak, nonatomic) id<WBSCloudFeedbackSource> feedbackSource;
@property (copy, nonatomic) id /* block */ openFeedbackAppForBugReportWithIssueCategory;

- (void).cxx_destruct;
- (id)_informativeTextString;
- (id)_issueStrings;
- (id)_menuTitle;
- (id)_messageText;
- (void)_reportFeedback:(long long)a0;
- (id)initWithFeedbackSource:(id)a0;

@end
