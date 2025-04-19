@class NSImage;

@interface GKFixedSizeImageView : NSImageView

@property (retain, nonatomic) NSImage *actualImage;

- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)image;
- (void)invalidateIntrinsicContentSize;

@end
