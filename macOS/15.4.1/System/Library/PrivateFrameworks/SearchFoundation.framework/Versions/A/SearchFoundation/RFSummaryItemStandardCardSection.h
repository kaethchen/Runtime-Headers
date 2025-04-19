@class SFCard, NSData, NSArray, RFTextProperty, NSString, SFColor, NSDictionary, SFUserReportRequest, SFCommand, SFAppEntityAnnotation, NSMutableDictionary, RFVisualProperty;

@interface RFSummaryItemStandardCardSection : SFCardSection <RFSummaryItemStandardCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char suppress_text_2_if_text_1_exceeds_a_single_line : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFTextProperty *text_1;
@property (copy, nonatomic) NSArray *text_2;
@property (copy, nonatomic) NSArray *text_3;
@property (retain, nonatomic) RFTextProperty *text_4;
@property (retain, nonatomic) RFVisualProperty *thumbnail;
@property (nonatomic) BOOL suppress_text_2_if_text_1_exceeds_a_single_line;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (copy, nonatomic) NSString *type;
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
- (BOOL)hasSuppress_text_2_if_text_1_exceeds_a_single_line;

@end
