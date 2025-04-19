@class NSArray, PKPeerPaymentDynamicFraudAlertContent, PKPeerPaymentDynamicFraudTitleMessageContent;

@interface PKPeerPaymentDynamicFraudContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudAlertContent *alertContent;
@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudTitleMessageContent *paymentSheetContent;
@property (readonly, copy, nonatomic) NSArray *pages;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
