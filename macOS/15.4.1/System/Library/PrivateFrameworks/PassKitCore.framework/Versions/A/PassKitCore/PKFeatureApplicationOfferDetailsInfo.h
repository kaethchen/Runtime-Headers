@class NSString;

@interface PKFeatureApplicationOfferDetailsInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *primaryActionTitle;
@property (copy, nonatomic) NSString *primaryActionIdentifier;
@property (copy, nonatomic) NSString *secondaryActionTitle;
@property (copy, nonatomic) NSString *secondaryActionIdentifier;
@property (copy, nonatomic) NSString *disclosureTitle;
@property (copy, nonatomic) NSString *heroImageURL;
@property (nonatomic) unsigned long long layout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
