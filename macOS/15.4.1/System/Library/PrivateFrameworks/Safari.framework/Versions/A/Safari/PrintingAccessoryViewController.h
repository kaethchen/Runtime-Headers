@class NSButton;

@interface PrintingAccessoryViewController : NSViewController <NSPrintPanelAccessorizing> {
    NSButton *printBackgroundsCheckbox;
    NSButton *printHeadersAndFootersCheckbox;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)keyPathsForValuesAffectingPreview;
- (id)localizedSummaryItems;
- (void)updateViews;
- (BOOL)printBackgrounds;
- (BOOL)printHeadersAndFooters;
- (void)setPrintBackgrounds:(BOOL)a0;
- (void)setPrintHeadersAndFooters:(BOOL)a0;
- (void)togglePrintBackgrounds:(id)a0;
- (void)togglePrintHeadersAndFooters:(id)a0;

@end
