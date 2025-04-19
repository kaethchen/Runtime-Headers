@class NSString, NSDate;

@interface SSPersonalAnswerResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isFlight;
@property (nonatomic) BOOL isHotel;
@property (nonatomic) BOOL isRestaurant;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildAction;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildDescriptions;
- (id)buildInlineCardSections;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)processRawTitleString:(id)a0;

@end
