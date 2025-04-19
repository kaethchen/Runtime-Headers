@class NSString, NSDate, EntitlementABCIssueReporter;

@interface EntitlementABCIssue : NSObject

@property (retain, nonatomic) EntitlementABCIssueReporter *reporter;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) unsigned long long reportCounter;
@property (retain, nonatomic) NSDate *nextAction;

- (id)context;
- (void).cxx_destruct;
- (id)tag;
- (void)report;
- (unsigned long long)abcReason;
- (void)handleABCResult:(int)a0;
- (id)initWithClient:(id)a0 processName:(id)a1 forReporter:(id)a2;
- (BOOL)isFinalResult:(int)a0;
- (void)reportIfNeeded;
- (BOOL)shouldBeReportedNow;

@end
