@class QCImageLoaderView, NSButton;

@interface QCImageLoaderUI : QCInspector {
    QCImageLoaderView *imageView;
    NSButton *reloadButton;
}

+ (id)viewNibName;

- (void)export:(id)a0;
- (void)import:(id)a0;
- (void)reload:(id)a0;
- (void)_updatePreview;
- (void)_importFile:(id)a0;
- (void)didLoadNib;
- (void)setupViewForPatch:(id)a0;

@end
