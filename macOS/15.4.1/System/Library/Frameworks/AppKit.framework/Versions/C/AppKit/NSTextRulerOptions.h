@class NSWindow, NSMutableDictionary, NSNumberFormatter, NSParagraphStyle;

@interface NSTextRulerOptions : NSObject {
    id addFavoritePanel;
    id favoriteNameField;
    id includeFontOptionsButton;
    id includeFontButton;
    id confirmAddFavoriteButton;
    id replaceFavoritePanel;
    id removeFavoritePanel;
    id removeFavoritePopUp;
    id spacingPanel;
    id multipleField;
    id minField;
    id maxField;
    id lineSpacingField;
    id multipleStepper;
    id minStepper;
    id maxStepper;
    id lineSpacingStepper;
    id minMatrix;
    id maxButton;
    id spaceBeforeField;
    id spaceAfterField;
    id spaceBeforeStepper;
    id spaceAfterStepper;
    id listPanel;
    id beforeField;
    id numberingPopUp;
    id afterField;
    id startLabel;
    id startField;
    id startStepper;
    id prependButton;
    id linkPanel;
    id linkField;
    NSNumberFormatter *_numberFormatter;
    NSMutableDictionary *_favoriteRulers;
    NSMutableDictionary *_selectedAttributes;
    NSParagraphStyle *_prespacingParagraphStyle;
    NSWindow *_windowForSheets;
    NSWindow *_windowForSpacing;
    id _delegateForSpacing;
    NSWindow *_windowForMarkerFormat;
    id _delegateForMarkerFormat;
    NSWindow *_windowForLink;
    id _delegateForLink;
}

+ (id)sharedTextRulerOptions;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addFavorite;
- (void)addFavorite:(id)a0 inWindow:(id)a1;
- (void)cancelSheet:(id)a0;
- (void)confirmSheet:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (id)displayStringForLineHeightMultiple:(double)a0 min:(double)a1 max:(double)a2 lineSpacing:(double)a3 paragraphSpacingBefore:(double)a4 after:(double)a5;
- (id)favoriteAttributesForName:(id)a0;
- (id)favoriteAttributesNames;
- (void)loadUI;
- (void)modifyOptionsViaPanel:(id)a0;
- (void)removeFavoriteInWindow:(id)a0;
- (void)removeLink:(id)a0;
- (void)saveFavoritesToDefaults;
- (id)selectedAttributes;
- (void)setLinkInWindow:(id)a0 string:(id)a1 delegate:(id)a2;
- (void)setMarkerFormatInWindow:(id)a0 textList:(id)a1 delegate:(id)a2;
- (void)setSpacing:(id)a0 inWindow:(id)a1 delegate:(id)a2;
- (void)setStartFieldAndStepper;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)updateFavoritesFromDefaults;
- (void)updateFavoritesUI;
- (void)updateLineSpacingUI;

@end
