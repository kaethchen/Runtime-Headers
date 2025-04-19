@class NSString, CKDialogContext;

@interface _CKPurchaseQueueDelegateWrapper : NSObject <CKPurchaseQueueDelegate>

@property (readonly) CKDialogContext *dialogContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDialogContext:(id)a0;
- (id)purchaseQueue:(id)a0 dialogContextForTransaction:(id)a1;

@end
