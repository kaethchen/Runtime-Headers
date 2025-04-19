@class NSString, NSArray;

@interface XCTOSFaultRuntimeIssue : NSObject <XCTRuntimeIssue>

@property (class, readonly) NSString *capability;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *runtimeIssueCallStackAddresses;
@property (readonly, copy) NSString *message;
@property (readonly) NSString *shortDescription;
@property (readonly) NSString *detailedDescription;
@property (readonly) NSArray *callStackAddresses;
@property (readonly) unsigned long long aggregationHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessage:(id)a0 callStackAddresses:(id)a1;
- (BOOL)isEqualForAggregationWith:(id)a0;

@end
