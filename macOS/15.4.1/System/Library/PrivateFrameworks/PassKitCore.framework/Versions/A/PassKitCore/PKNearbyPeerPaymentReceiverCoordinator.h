@class _PKNearbyPeerPaymentReceiverCoordinator;

@interface PKNearbyPeerPaymentReceiverCoordinator : NSObject {
    _PKNearbyPeerPaymentReceiverCoordinator *_internalCoordinator;
}

+ (BOOL)nearbyReceiverIsEligible;

- (void).cxx_destruct;
- (id)initWithSenderMetadata:(id)a0;
- (void)nearbyReceiverRequiresConfirmationWithContactID:(id)a0 completionHandler:(id /* block */)a1;
- (void)recipientMetadataWithAppearanceData:(id)a0 nonce:(id)a1 completion:(id /* block */)a2;
- (void)recipientMetadataWithContactID:(id)a0 completion:(id /* block */)a1;
- (void)validateTransactionWithResult:(id)a0 completion:(id /* block */)a1;

@end
