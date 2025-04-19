@class NSString, NSArray, SFActionItem, SFImage, SFFormattedText, SFRichText, SFButton, MKSearchFoundationResult;

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SFImage *leadingImage;
@property (retain) SFImage *fallbackImage;
@property (retain) SFButton *leadingButton;
@property BOOL preventThumbnailImageScaling;
@property BOOL isLocalApplicationResult;
@property (retain) NSString *nearbyBusinessesString;
@property (retain) SFRichText *topText;
@property (retain) SFRichText *title;
@property BOOL truncateTitleMiddle;
@property (retain) SFFormattedText *secondaryTitle;
@property BOOL secondaryTitleIsDetached;
@property (retain) SFImage *secondaryTitleImage;
@property (retain, nonatomic) NSArray *details;
@property (retain) SFRichText *footnote;
@property (retain) NSString *footnoteButtonText;
@property (retain) NSString *pinText;
@property (retain) SFActionItem *action;
@property (retain) SFRichText *trailingTopText;
@property (retain) SFRichText *trailingMiddleText;
@property (retain) SFRichText *trailingBottomText;
@property (retain) NSArray *buttonItems;
@property BOOL buttonItemsAreTrailing;
@property (retain) SFImage *trailingThumbnail;
@property (retain) MKSearchFoundationResult *mapsResult;
@property (retain, nonatomic) NSArray *alternateDetails;
@property (retain, nonatomic) SFImage *alternateLeadingImage;
@property (readonly) BOOL truncateDetailsMiddle;
@property (readonly) BOOL useCompactVersionOfUI;
@property (nonatomic) BOOL useAlternateDetails;

+ (BOOL)urlIsDraggable:(id)a0;
+ (id)richTextWithFormattedText:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)backgroundColor;
- (BOOL)isContact;
- (id)contactIdentifiers;
- (id)descriptionText;
- (int)separatorStyle;
- (id)dragURL;
- (BOOL)hasLeadingImage;
- (id)dragAppBundleID;
- (Class)cardSectionViewClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (void)fillOutPropertiesForCardSection:(id)a0;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (id)initWithResult:(id)a0 suggestion:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3;
- (BOOL)isTappable;
- (id)populatedMapsCardSectionIfApplicable;
- (id)punchouts;
- (id)richTextFromText:(id)a0;

@end
