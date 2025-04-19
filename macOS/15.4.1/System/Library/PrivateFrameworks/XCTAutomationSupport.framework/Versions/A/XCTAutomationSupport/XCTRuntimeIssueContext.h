@class NSOrderedSet, NSMutableOrderedSet, XCTCapabilities;

@interface XCTRuntimeIssueContext : NSObject

@property (class, readonly) XCTRuntimeIssueContext *currentContext;

@property (retain) NSMutableOrderedSet *mutableRuntimeIssues;
@property (readonly, copy) XCTCapabilities *capabilities;
@property (readonly, weak) Class reportingDelegate;
@property (readonly, copy) NSOrderedSet *runtimeIssues;

+ (id)aggregationOfRuntimeIssues:(id)a0;
+ (void)captureIssuesWithContext:(id)a0 inScope:(id /* block */)a1;
+ (void)reportRuntimeIssue:(id)a0;
+ (void)reportRuntimeIssues:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCapabilities:(id)a0 reportingDelegate:(Class)a1;
- (void)reportRuntimeIssue:(id)a0;

@end
