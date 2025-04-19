@class NSProgressIndicator, NSButton, NSLocale;

@interface LTUILanguageCellView : NSTableCellView

@property (weak) NSProgressIndicator *downloadProgressIndicator;
@property (weak) NSButton *downloadButton;
@property (weak) NSButton *stopDownloadButton;
@property (copy) NSLocale *locale;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
