@class NSArray, NSString, NSDate;

@interface SSPurchaseRequestResultBuilder : SSResultBuilder

@property (nonatomic) int requestStatus;
@property (nonatomic) double starRating;
@property (retain, nonatomic) NSArray *approvers;
@property (retain, nonatomic) NSDate *requestDate;
@property (retain, nonatomic) NSDate *respondDate;
@property (retain, nonatomic) NSString *ageRating;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appPrice;
@property (retain, nonatomic) NSString *appType;
@property (retain, nonatomic) NSString *requesterContactIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *requestStatusString;
@property (retain, nonatomic) NSString *requesterName;
@property (retain, nonatomic) NSString *thumbnailAppType;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildInlineCardSection;
- (id)buildSecondaryTitle;
- (BOOL)buildSecondaryTitleIsDetached;
- (id)buildThumbnail;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
