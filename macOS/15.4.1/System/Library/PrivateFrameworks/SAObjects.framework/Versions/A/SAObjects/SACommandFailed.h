@class NSString, NSDictionary, NSArray, NSNumber;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand, SATurnIdContaining>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *customErrorCode;
@property (copy, nonatomic) NSString *customErrorDomain;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;


- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)initWithReason:(id)a0;
- (id)encodedClassName;
- (id)initWithErrorCode:(long long)a0;

@end
