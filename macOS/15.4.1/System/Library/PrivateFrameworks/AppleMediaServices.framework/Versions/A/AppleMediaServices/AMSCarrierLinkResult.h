@class NSString, NSDictionary, NSError, NSNumber, AMSCarrierLinkParams;

@interface AMSCarrierLinkResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSError *error;
@property (readonly) NSDictionary *response;
@property (readonly) NSNumber *statusCode;
@property (readonly) NSString *channelCustomerId;
@property (readonly) AMSCarrierLinkParams *linkParams;
@property (readonly) NSString *productCode;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChannelLinkResult:(id)a0;
- (id)initWithLinkParams:(id)a0 channelCustomerId:(id)a1 productCode:(id)a2 statusCode:(id)a3 error:(id)a4;
- (id)initWithResponse:(id)a0 linkParams:(id)a1;

@end
