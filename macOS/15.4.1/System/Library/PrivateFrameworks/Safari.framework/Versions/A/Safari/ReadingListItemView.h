@class NSView, NSTextField;
@protocol ReadingListItemViewThumbnailImageView;

@interface ReadingListItemView : NSView {
    id _fallbackIconRequestToken;
}

@property (readonly, nonatomic) NSTextField *titleTextField;
@property (readonly, nonatomic) NSTextField *previewTextField;
@property (readonly, nonatomic) NSTextField *domainTextField;
@property (readonly, nonatomic) NSView<ReadingListItemViewThumbnailImageView> *thumbnailView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_cancelFallbackIconRequest;
- (id)_createLabelTextField;
- (void)cancelGetThumbnailImage;
- (void)getThumbnailImageForReadingListItem:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 thumbnailView:(id)a1;

@end
