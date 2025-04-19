@class NSImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : NSView

@property (retain, nonatomic) NSImageView *placeholderImageView;
@property (retain, nonatomic) NSImageView *cardImageView;

- (void).cxx_destruct;
- (id)initWithRemotePaymentInstrument:(id)a0;
- (void)_prepareConstraints;
- (void)_updateCardImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithRemotePaymentInstrument:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1;

@end
