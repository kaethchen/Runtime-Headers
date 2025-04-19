@class NSOrderedSet, XCElementSnapshot, NSString;

@interface XCUIElementSnapshotRequestResult : NSObject <NSSecureCoding, XCTCapabilitiesProviding, XCTRuntimeIssueContextReportingDelegate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) XCElementSnapshot *rootElementSnapshot;
@property (readonly, copy) NSOrderedSet *runtimeIssues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)provideCapabilitiesToBuilder:(id)a0;
+ (BOOL)shouldRuntimeIssueContext:(id)a0 reportIssue:(id)a1;

@end
