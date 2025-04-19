@class NSString, NSDictionary, AMSChannelLinkParams, NSError, NSNumber, NSSet;

@interface AMSChannelLinkResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSError *error;
@property (readonly) NSDictionary *response;
@property (readonly) NSNumber *statusCode;
@property (readonly) NSString *channelCustomerId;
@property (readonly) AMSChannelLinkParams *linkParams;
@property (readonly) NSString *productCode;
@property (readonly) NSSet *postLinkingFields;
@property (readonly) NSString *subscriptionId;
@property (readonly) NSSet *supplementaryFields;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponse:(id)a0 linkParams:(id)a1;
- (id)initWithResponse:(id)a0 linkParams:(id)a1 supplementaryFields:(id)a2;

@end
