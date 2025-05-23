@class NSString, RBSAssertion;

@interface _CNRunningBoardInhibitor : CNInhibitor

@property (readonly, copy, nonatomic) NSString *explanation;
@property (retain, nonatomic) RBSAssertion *assertion;

+ (id)os_log;
+ (id)runningBoardTarget;

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithExplanation:(id)a0;

@end
