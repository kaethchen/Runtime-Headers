@class NSNumber, NSString, NSDictionary;

@interface AMSUIWebAuthorizeApplePayEnrollmentAction : AMSUIWebAction

@property (retain) NSNumber *confirmationStyle;
@property (retain) NSString *passSerialNumber;
@property (retain) NSString *passTypeIdentifier;
@property (retain) NSDictionary *paymentSession;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
