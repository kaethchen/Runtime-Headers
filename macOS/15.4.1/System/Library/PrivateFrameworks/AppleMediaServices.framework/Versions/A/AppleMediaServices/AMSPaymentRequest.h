@class NSString, AMSPaymentContentItem, NSArray;

@interface AMSPaymentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *dialogCancelButtonLabel;
@property (retain) NSString *dialogDefaultButtonLabel;
@property (retain) NSString *dialogOtherButtonLabel;
@property (retain) AMSPaymentContentItem *salableInfo;
@property (retain) AMSPaymentContentItem *secondarySalableInfo;
@property (copy, nonatomic) NSArray *paymentContentItems;
@property (copy, nonatomic) NSArray *secondaryContentItems;
@property (copy, nonatomic) NSString *localizedNavigationTitle;
@property BOOL drawBackground;
@property BOOL drawBottomDivider;
@property (retain) NSString *languageTagBagValue;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
