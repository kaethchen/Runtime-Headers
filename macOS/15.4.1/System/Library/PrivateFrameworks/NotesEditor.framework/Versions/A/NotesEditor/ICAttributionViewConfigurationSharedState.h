@class NSDate, NSMutableDictionary, NSImage, ICNote, ICMacBaseTextView, NSFont, ICTTTextStorage;

@interface ICAttributionViewConfigurationSharedState : NSObject

@property (copy, nonatomic) NSFont *primaryFont;
@property (retain, nonatomic) id primaryFontStorage;
@property (copy, nonatomic) NSFont *secondaryFont;
@property (retain, nonatomic) id secondaryFontStorage;
@property (copy, nonatomic) NSImage *expandedDisclosureImage;
@property (copy, nonatomic) NSImage *collapsedDisclosureImage;
@property (retain, nonatomic) NSMutableDictionary *userIDToHighlightColor;
@property (retain, nonatomic) NSMutableDictionary *userIDToShortName;
@property (readonly, weak, nonatomic) ICMacBaseTextView *textView;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) ICTTTextStorage *noteTextStorage;
@property (copy, nonatomic) NSDate *noteLastOpenedDate;
@property (nonatomic) double panelWidth;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) double topTextViewInset;
@property (nonatomic) double zoomFactor;

- (void).cxx_destruct;
- (void)updateImages;
- (void)updateFonts;
- (id)highlightColorForUserID:(id)a0;
- (id)disclosureImageWithSymbolName:(id)a0;
- (id)initWithTextView:(id)a0 note:(id)a1;
- (BOOL)isTimestampUnread:(id)a0 forUserID:(id)a1;
- (id)shortNameForUserID:(id)a0;
- (void)synchronouslyLoadDataForEditGroups:(id)a0;
- (void)updateFontStorages;
- (void)updateHighlightColorsForUserIDs:(id)a0;
- (void)updateShortNamesForUserIDs:(id)a0;

@end
