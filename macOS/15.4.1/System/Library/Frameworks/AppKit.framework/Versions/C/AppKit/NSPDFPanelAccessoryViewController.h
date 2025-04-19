@class NSPDFInfo, NSViewController, NSGridView, NSPopUpButton, NSButton;

@interface NSPDFPanelAccessoryViewController : NSViewController {
    NSViewController *_customAccessoryViewController;
    NSPopUpButton *_pageSizePopup;
    NSGridView *_pageAndOrientationContainer;
    NSButton *_portraitButton;
    NSButton *_landscapeButton;
    BOOL showOrientation;
    BOOL showPaperSize;
}

@property (readonly) NSPDFInfo *pdfInfo;

- (void)dealloc;
- (void)setOrientation:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_printInfo;
- (void)_setPrintInfo:(id)a0;
- (void)awakeFromNib;
- (void)changePaper:(id)a0;
- (id)initWithOptions:(long long)a0 customAccessoryViewController:(id)a1;
- (void)loadView;
- (id)populateMenu:(id)a0 withPaperList:(id)a1;

@end
