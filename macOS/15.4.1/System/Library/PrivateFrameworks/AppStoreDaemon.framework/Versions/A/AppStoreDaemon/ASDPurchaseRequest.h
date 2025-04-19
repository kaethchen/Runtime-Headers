@class ASDPurchaseRequestOptions;

@interface ASDPurchaseRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurchaseRequestOptions *options;

- (id)init;
- (id)initWithOptions:(id)a0;

@end
