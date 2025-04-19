@class NSArray, PDFView, PDFIconCollectionView, NSFont, NSColor;

@interface PDFThumbnailView : NSView <NSCoding> {
    PDFView *_pdfView;
    struct CGSize { double width; double height; } _thumbnailSize;
    NSColor *_backgroundColor;
    int _maximumNumberOfColumns;
    NSFont *_labelFont;
    BOOL _allowsMultipleSelection;
    PDFIconCollectionView *_iconsView;
}

@property (weak, nonatomic) PDFView *PDFView;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) NSArray *selectedPages;
@property (nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;
@property (nonatomic) unsigned long long maximumNumberOfColumns;
@property (copy, nonatomic) NSFont *labelFont;
@property (nonatomic) BOOL allowsDragging;
@property (nonatomic) BOOL allowsMultipleSelection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLayout;
- (id)pdfView;
- (void)currentPageChanged:(id)a0;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (void)documentUnlocked:(id)a0;
- (void)pageChanged:(id)a0;
- (void)setPdfView:(id)a0;
- (void)setupNotifications;
- (void)updateNotificationsForDocument;

@end
