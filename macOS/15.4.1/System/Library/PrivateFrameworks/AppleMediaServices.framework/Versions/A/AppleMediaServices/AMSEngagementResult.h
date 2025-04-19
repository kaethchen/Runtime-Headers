@class NSString, AMSCarrierLinkResult, NSData, AMSPurchaseResult, NSDictionary;

@interface AMSEngagementResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *ams_buyParams;
@property (retain) NSData *modelData;
@property (retain) AMSCarrierLinkResult *carrierLinkResult;
@property (retain) AMSPurchaseResult *purchaseResult;
@property (retain) NSDictionary *userInfo;

+ (id)_updatedBodyFromValue:(id)a0 request:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModel:(id)a0;
- (id)ams_requestActionFromRequest:(id)a0;
- (id)modelForClass:(Class)a0 error:(id *)a1;

@end
