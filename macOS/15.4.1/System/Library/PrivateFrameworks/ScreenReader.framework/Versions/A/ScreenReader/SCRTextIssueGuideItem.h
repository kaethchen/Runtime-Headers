@class AXSSDocumentIssue;

@interface SCRTextIssueGuideItem : SCRGuideItem

@property (retain, nonatomic) AXSSDocumentIssue *issue;

+ (id)itemForTextIssue:(id)a0 parentGuide:(id)a1 target:(id)a2 action:(id)a3;

- (void).cxx_destruct;
- (void)_addSentenceInformationToRequest:(id)a0 variants:(id)a1;
- (id)initWithIssue:(id)a0 parentGuide:(id)a1 target:(id)a2 action:(id)a3;
- (id)initWithIssue:(id)a0 title:(id)a1 parentGuide:(id)a2 target:(id)a3 action:(id)a4;

@end
