@class NSString, NSArray, _FEDebugIssueReport;

@interface _FEDebugIssue : NSObject <_FEDebugIssueReporting>

@property (readonly, nonatomic, getter=_subissueReport) _FEDebugIssueReport *subissueReport;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *description;
@property (readonly, copy, nonatomic) NSArray *subissues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

+ (id)issueWithDescription:(id)a0;
+ (id)issueWithFormat:(id)a0;

@end
