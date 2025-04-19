@class NSString, PKPeerPaymentProfileAppearanceData, NSData;

@interface _PKNearbyPeerPaymentReceiverCoordinator : NSObject {
    void /* unknown type, empty encoding */ peerPaymentAccount;
    void /* unknown type, empty encoding */ senderMetadata;
    void /* unknown type, empty encoding */ $__lazy_storage_$_amountFormatter;
}

+ (BOOL)nearbyReceiverIsEligible;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSenderMetadata:(id)a0;
- (void)nearbyReceiverRequiresConfirmationWithContactID:(NSString *)a0 completionHandler:(void (^)(BOOL))a1;
- (void)recipientMetadataWithAppearanceData:(PKPeerPaymentProfileAppearanceData *)a0 nonce:(NSString *)a1 completionHandler:(void (^)(NSData *))a2;
- (void)validateTransactionWithResult:(NSData *)a0 completionHandler:(void (^)(BOOL))a1;

@end
