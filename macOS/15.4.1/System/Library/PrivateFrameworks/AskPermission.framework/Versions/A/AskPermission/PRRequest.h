@class NSString, NSDictionary, NSDate, NSNumber;

@interface PRRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *requestID;
@property (copy) NSString *ask;
@property (copy) NSDictionary *requestInfo;
@property unsigned long long requestStatus;
@property (copy) NSNumber *requesterDSID;
@property (copy) NSNumber *responderDSID;
@property (copy) NSString *clientIdentifier;
@property BOOL requestedOnThisDevice;
@property (copy) NSDate *dateAddedToLocalCache;
@property (readonly) NSString *statusDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cacheRepresentation;
- (id)initWithAsk:(id)a0 requestInfo:(id)a1;
- (id)initWithCacheRepresentation:(id)a0;

@end
