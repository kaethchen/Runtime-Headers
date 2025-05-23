@class NSData, NSArray, NSString, _SFPBImage, _SFPBActionItem, _SFPBColor, _SFPBRichText;

@interface _SFPBRichTitleCardSection : PBCodable <_SFPBRichTitleCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) _SFPBImage *titleImage;
@property (nonatomic) BOOL isCentered;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) float rating;
@property (copy, nonatomic) NSString *ratingText;
@property (retain, nonatomic) _SFPBImage *reviewGlyph;
@property (copy, nonatomic) NSString *reviewText;
@property (nonatomic) BOOL reviewNewLine;
@property (copy, nonatomic) NSArray *moreGlyphs;
@property (copy, nonatomic) NSString *auxiliaryTopText;
@property (copy, nonatomic) NSString *auxiliaryMiddleText;
@property (copy, nonatomic) NSString *auxiliaryBottomText;
@property (nonatomic) int auxiliaryBottomTextColor;
@property (nonatomic) int auxiliaryAlignment;
@property (nonatomic) BOOL hideVerticalDivider;
@property (nonatomic) int titleAlign;
@property (nonatomic) int titleWeight;
@property (nonatomic) BOOL titleNoWrap;
@property (nonatomic) BOOL thumbnailCropCircle;
@property (retain, nonatomic) _SFPBImage *imageOverlay;
@property (retain, nonatomic) _SFPBActionItem *playAction;
@property (nonatomic) int playActionAlign;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *footnote;
@property (retain, nonatomic) _SFPBRichText *richSubtitle;
@property (nonatomic) BOOL subtitleIsEmphasized;
@property (copy, nonatomic) NSArray *buttonItems;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)buttonItemsCount;
- (void)clearButtonItems;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)clearMoreGlyphs;
- (void)addButtonItems:(id)a0;
- (unsigned long long)moreGlyphsCount;
- (void)addMoreGlyphs:(id)a0;
- (void)addOffers:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (id)buttonItemsAtIndex:(unsigned long long)a0;
- (void)clearOffers;
- (void)clearPunchoutOptions;
- (id)moreGlyphsAtIndex:(unsigned long long)a0;
- (id)offersAtIndex:(unsigned long long)a0;
- (unsigned long long)offersCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)punchoutOptionsCount;

@end
