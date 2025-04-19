@class NSString, NSMutableString, NSArray, NSMutableArray;
@protocol AXAuditCategoryResultDelegate;

@interface AXAuditCategoryResult : AXAuditTimedResult

@property (retain, nonatomic) NSMutableArray *_mutableCases;
@property (retain, nonatomic) NSMutableString *_mutableLog;
@property (weak, nonatomic) id<AXAuditCategoryResultDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *caseResults;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)log;
- (void)addCaseResult:(id)a0;
- (id)allIssues;
- (void)appendLog:(id)a0;
- (long long)issueCount;
- (id)issueSummaryStrings;

@end
