@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;

@interface AMSPurchaseQueueConfiguration : NSObject

@property (readonly) id<AMSBagProtocol> bag;
@property (retain) id<AMSPurchaseResponseProtocol> delegate;
@property (retain) Class purchaseTaskClass;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;

@end
