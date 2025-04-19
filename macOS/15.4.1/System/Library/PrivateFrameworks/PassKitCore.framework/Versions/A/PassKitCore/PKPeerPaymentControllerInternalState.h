@class PKPeerPaymentRequestToken, NSString, PKPeerPaymentRecipient, PKPeerPaymentQuoteRequest, NSDate, PKPeerPaymentQuote, PKPeerPaymentPerformResponse, PKAuthorizedPeerPaymentQuote, PKPeerPaymentQuoteCertificatesResponse, NSDecimalNumber;

@interface PKPeerPaymentControllerInternalState : NSObject <NSSecureCoding> {
    unsigned long long state;
    unsigned long long mode;
    unsigned long long peerPaymentType;
    NSString *senderPhoneOrEmail;
    NSString *recipientPhoneOrEmail;
    PKPeerPaymentRecipient *recipient;
    NSString *recipientDisplayName;
    PKPeerPaymentRequestToken *requestToken;
    PKPeerPaymentQuote *quote;
    PKAuthorizedPeerPaymentQuote *authorizedQuote;
    PKPeerPaymentPerformResponse *performQuoteResponse;
    BOOL supportsPreserveCurrentBalance;
    PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse;
    NSString *accountName;
    NSString *accountNumber;
    NSString *routingNumber;
    PKPeerPaymentQuoteRequest *quoteRequest;
    NSString *recurringPaymentIdentifier;
    NSDate *startDate;
    unsigned long long frequency;
    NSDecimalNumber *threshold;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPeerPaymentControllerInternalState:(id)a0;

@end
