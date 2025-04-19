@class PKPeerPaymentPassDetailsResponse, PKPeerPaymentAccount, NSString, PKCurrencyAmount;

@interface PKPeerPaymentCredential : PKPaymentCredential {
    NSString *_pendingPaymentSenderName;
}

@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (retain, nonatomic) PKPeerPaymentPassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) unsigned long long flowState;
@property (copy, nonatomic) NSString *pendingPaymentSenderAddress;
@property (readonly, copy, nonatomic) NSString *pendingPaymentSenderName;
@property (nonatomic) unsigned long long paymentMode;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)longDescription;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithPeerPaymentAccount:(id)a0;
- (BOOL)supportsSuperEasyProvisioning;

@end
