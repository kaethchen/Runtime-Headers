@class NSMutableDictionary, SFColor, SFActionItem, SFCard, NSDictionary, SFAppEntityAnnotation, NSString, SFImage, SFCommand, SFRichText, NSArray, NSData, SFFormattedText, SFUserReportRequest, SFButton;

@interface SFDetailedRowCardSection : SFCardSection <SFDetailedRowCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char preventThumbnailImageScaling : 1; unsigned char isSecondaryTitleDetached : 1; unsigned char shouldUseCompactDisplay : 1; unsigned char buttonItemsAreTrailing : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) SFImage *thumbnail;
@property (nonatomic) BOOL preventThumbnailImageScaling;
@property (retain, nonatomic) SFRichText *title;
@property (retain, nonatomic) SFFormattedText *secondaryTitle;
@property (retain, nonatomic) SFImage *secondaryTitleImage;
@property (nonatomic) BOOL isSecondaryTitleDetached;
@property (copy, nonatomic) NSArray *descriptions;
@property (retain, nonatomic) SFRichText *footnote;
@property (retain, nonatomic) SFFormattedText *trailingTopText;
@property (retain, nonatomic) SFFormattedText *trailingMiddleText;
@property (retain, nonatomic) SFFormattedText *trailingBottomText;
@property (retain, nonatomic) SFActionItem *action;
@property (retain, nonatomic) SFButton *button;
@property (nonatomic) BOOL shouldUseCompactDisplay;
@property (copy, nonatomic) NSArray *buttonItems;
@property (retain, nonatomic) SFImage *trailingThumbnail;
@property (nonatomic) BOOL buttonItemsAreTrailing;
@property (retain, nonatomic) SFRichText *topText;
@property (retain, nonatomic) SFRichText *richTrailingTopText;
@property (retain, nonatomic) SFRichText *richTrailingMiddleText;
@property (retain, nonatomic) SFRichText *richTrailingBottomText;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL shouldHideInAmbientMode;
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (copy, nonatomic) NSArray *leadingSwipeButtonItems;
@property (copy, nonatomic) NSArray *trailingSwipeButtonItems;
@property (copy, nonatomic) NSArray *referencedCommands;
@property (nonatomic) BOOL forceEnable3DTouch;
@property (nonatomic) BOOL shouldShowInSmartDialog;
@property (copy, nonatomic) NSString *emphasisSubjectId;
@property (nonatomic) int increasedContrastMode;
@property (retain, nonatomic) SFCommand *secondaryCommand;
@property (nonatomic) int requiredLevelOfDetail;
@property (retain, nonatomic) SFAppEntityAnnotation *appEntityAnnotation;
@property (copy, nonatomic) NSString *racFeedbackSubfeatureId;
@property (retain, nonatomic) NSMutableDictionary *racFeedbackLoggingContent;
@property (readonly) NSArray *embeddedCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasPreventThumbnailImageScaling;
- (BOOL)hasButtonItemsAreTrailing;
- (BOOL)hasIsSecondaryTitleDetached;
- (BOOL)hasShouldUseCompactDisplay;

@end
