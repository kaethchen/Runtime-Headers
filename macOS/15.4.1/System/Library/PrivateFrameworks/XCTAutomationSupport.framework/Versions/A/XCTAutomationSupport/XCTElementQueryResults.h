@class XCElementSnapshot, NSOrderedSet, NSSet, NSString;

@interface XCTElementQueryResults : NSObject <NSSecureCoding, XCTCapabilitiesProviding, XCTRuntimeIssueContextReportingDelegate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) XCElementSnapshot *rootElement;
@property (readonly, copy) NSOrderedSet *matchingElements;
@property (readonly, copy) NSSet *remoteElements;
@property (readonly, copy) NSOrderedSet *runtimeIssues;
@property (readonly, copy) NSString *noMatchesMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)provideCapabilitiesToBuilder:(id)a0;
+ (BOOL)shouldRuntimeIssueContext:(id)a0 reportIssue:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRootElement:(id)a0 matchingElements:(id)a1 remoteElements:(id)a2 runtimeIssues:(id)a3 noMatchesMessage:(id)a4;
- (id)resultsByReplacingRuntimeIssues:(id)a0;

@end
