@class _PKNearbyPeerPaymentReceiverResponseMetadata;

@interface PKNearbyPeerPaymentReceiverResponseMetadata : NSObject {
    _PKNearbyPeerPaymentReceiverResponseMetadata *_internalData;
}

+ (void)receiverDataWithNonce:(id)a0 nearbyMetadata:(id)a1 appearanceData:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)serializedData;
- (id)initWithInternalData:(id)a0;

@end
