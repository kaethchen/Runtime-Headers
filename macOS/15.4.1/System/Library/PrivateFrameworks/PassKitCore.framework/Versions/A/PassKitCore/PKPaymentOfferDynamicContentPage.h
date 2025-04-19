@class PKApplyFooterContentLink, NSString, NSSet, PKPaymentOfferDynamicContentIcon, PKApplyFooterContent, PKPaymentOfferDynamicContentCustomLayout, PKSystemIconConfiguration;

@interface PKPaymentOfferDynamicContentPage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long pageType;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSSet *bodyLinks;
@property (readonly, copy, nonatomic) NSString *primaryActionTitle;
@property (readonly, nonatomic) PKApplyFooterContentLink *primaryActionDetails;
@property (readonly, copy, nonatomic) NSString *secondaryActionTitle;
@property (readonly, nonatomic) PKApplyFooterContentLink *secondaryActionDetails;
@property (readonly, copy, nonatomic) PKPaymentOfferDynamicContentIcon *iconURL;
@property (readonly, copy, nonatomic) PKSystemIconConfiguration *systemIcon;
@property (readonly, nonatomic) PKApplyFooterContent *footerContent;
@property (readonly, nonatomic) PKApplyFooterContent *altFooterContent;
@property (readonly, nonatomic) PKPaymentOfferDynamicContentCustomLayout *customLayout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)bodyLinkContent;
- (id)initWithDictionary:(id)a0 pageType:(unsigned long long)a1;

@end
