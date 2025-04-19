@class NSArray, NSString, IMServiceReachabilityContext;

@interface IMServiceReachabilityRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *handleIDs;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) IMServiceReachabilityContext *context;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_signature;
- (id)initWithHandleIDs:(id)a0 requestID:(id)a1 serviceName:(id)a2 accountID:(id)a3 context:(id)a4;

@end
