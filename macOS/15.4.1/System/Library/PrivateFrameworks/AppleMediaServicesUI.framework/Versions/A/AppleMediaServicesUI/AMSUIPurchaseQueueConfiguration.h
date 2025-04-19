@protocol AMSUIPurchaseResponseProtocol;

@interface AMSUIPurchaseQueueConfiguration : AMSPurchaseQueueConfiguration

@property (retain) id<AMSUIPurchaseResponseProtocol> delegate;

- (id)initWithBag:(id)a0;

@end
