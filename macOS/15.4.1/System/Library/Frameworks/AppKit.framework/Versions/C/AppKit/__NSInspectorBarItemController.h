@class NSView, NSString, NSComboBox, NSInspectorBarState, NSPopUpButton, NSInspectorBar, NSColorWell, NSSegmentedControl;
@protocol NSInspectorBarClient, NSTextInputClient;

@interface __NSInspectorBarItemController : NSObject <NSInspectorBarItemController, NSMenuDelegate, NSComboBoxCellDataSource> {
    NSInspectorBar *_inspectorBar;
    id _client;
    NSString *_lastAction;
    id _lastActionConfig;
    struct { unsigned char _interfaceLoaded : 1; unsigned char _alignment : 1; unsigned char _backgroundColor : 1; unsigned char _multipleRanges : 1; unsigned char _textStorage : 1; unsigned char _typingAttributes : 1; unsigned char _textView : 1; unsigned char _styleInvalidated : 1; unsigned char _userFontSectionInvalidated : 1; unsigned char _mainFontSectionInvalidated : 1; unsigned char _forceUpdatingTypeface : 1; unsigned char _lineSpaceSheet : 1; unsigned char _clientIsAsync : 1; unsigned int _reserved : 19; unsigned char _shouldConfirmLastActionBeforeCheckingFallback : 1; } _flags;
}

@property (nonatomic) BOOL fullyJustified;
@property (retain, nonatomic) NSInspectorBarState *inspectorState;
@property (readonly) id<NSInspectorBarClient, NSTextInputClient> client;
@property (retain) NSPopUpButton *stylePopup;
@property (retain) NSPopUpButton *fontFamilyPopup;
@property (retain) NSPopUpButton *fontFacePopup;
@property (retain) NSComboBox *fontSizeComboBox;
@property (retain) NSColorWell *foregroundColorWell;
@property (retain) NSColorWell *backgroundColorWell;
@property (retain) NSSegmentedControl *textStyleSwitches;
@property (retain) NSSegmentedControl *alignmentSwitches;
@property (retain) NSView *horizontalAlignmentContainer;
@property (weak) NSSegmentedControl *horizontalAlignmentLCRSwitches;
@property (weak) NSSegmentedControl *horizontalAlignmentJSwitches;
@property (retain) NSPopUpButton *lineSpacingPopup;
@property (retain) NSPopUpButton *listPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nibName;
+ (id)favoriteFontSizes;
+ (id)keyForItemIdentifier:(id)a0;
+ (id)loadedNib;
+ (id)nibBundle;
+ (id)recentsFontFamilyNames;
+ (id)supportedInspectorItemIdentifiers;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_alignmentAction:(id)a0;
- (void)_colorAction:(id)a0;
- (void)_doUserParagraphStyleLineHeightMultiple:(double)a0 min:(double)a1 max:(double)a2 lineSpacing:(double)a3 paragraphSpacingBefore:(double)a4 after:(double)a5 isFinal:(BOOL)a6;
- (void)_fontPopupAction:(id)a0;
- (void)_fontSizeAction:(id)a0;
- (void)_fontStyleAction:(id)a0;
- (void)_horizontalAlignmentAction:(id)a0;
- (void)_invalidationNotification:(id)a0;
- (void)_lineSpacingAction:(id)a0;
- (void)_listAction:(id)a0;
- (void)_loadNib;
- (BOOL)_shouldCheckForFallbackFont;
- (void)_stylePopupAction:(id)a0;
- (void)_updateMainFontSection;
- (void)_updateRecentsFontSection;
- (void)_updateSelectedAttributesForAsyncClient;
- (void)_updateSelectedAttributesForSyncClient;
- (void)_updateStylePopup;
- (void)_updateTextInputClient:(id)a0;
- (void)_updateUserFontSection;
- (BOOL)adjustStateForDifferentAttributeValuesInRange:(id)a0 attributedString:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (id)convertAttributes:(id)a0;
- (id)convertFont:(id)a0;
- (double)defaultLineHeightForFont:(id)a0;
- (void)fontSizeItemWasClicked:(id)a0;
- (id)initWithInspectorBar:(id)a0;
- (BOOL)inspectorBarItemCanBeDetached:(id)a0;
- (BOOL)inspectorBarItemDetachesFirst:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (long long)numberOfItemsInComboBox:(id)a0;
- (id)resolveInspectorBarStateForFontAttributes:(id)a0;
- (void)supportedInspectorItemViewsDidLoad;
- (void)updateInspectorItemViewsWithIdentifiers:(id)a0 fontFamilyName:(id)a1 fontFaceName:(id)a2 fontPointSize:(double)a3 foregroundColor:(id)a4 backgroundColor:(id)a5 boldTrait:(char)a6 italicTrait:(char)a7 underlineStyle:(id)a8 strikeThrough:(id)a9 alignment:(long long)a10 horizontalAlignment:(long long)a11 fullyJustified:(BOOL)a12 lineSpacingStyle:(id)a13 textList:(id)a14;
- (void)updateInspectorItemViewsWithIdentifiers:(id)a0 fontFamilyName:(id)a1 fontFaceName:(id)a2 fontPointSize:(double)a3 foregroundColor:(id)a4 backgroundColor:(id)a5 boldTrait:(char)a6 italicTrait:(char)a7 underlineStyle:(id)a8 strikeThrough:(id)a9 alignment:(long long)a10 lineSpacingStyle:(id)a11 textList:(id)a12;
- (void)updateInspectorItemViewsWithIdentifiers:(id)a0 state:(id)a1;
- (void)updateSelectedAttributes;
- (id)viewForInspectorBarItem:(id)a0;

@end
