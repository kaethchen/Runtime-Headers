@class NSData;

@interface _PKNearbyPeerPaymentReceiverResponseMetadata : NSObject {
    void /* unknown type, empty encoding */ encryptedData;
    void /* unknown type, empty encoding */ encryptionVersion;
    void /* unknown type, empty encoding */ publicKeyHash;
    void /* unknown type, empty encoding */ ephemeralPublicKey;
    void /* unknown type, empty encoding */ senderAddress;
    void /* unknown type, empty encoding */ receiverAddress;
    void /* unknown type, empty encoding */ receiverImageData;
    void /* unknown type, empty encoding */ contactAddressType;
}

@property (nonatomic, readonly) NSData *serializedData;

+ (void)receiverDataWithNonce:(id)a0 nearbyMetadata:(id)a1 appearanceData:(id)a2 completion:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;

@end
