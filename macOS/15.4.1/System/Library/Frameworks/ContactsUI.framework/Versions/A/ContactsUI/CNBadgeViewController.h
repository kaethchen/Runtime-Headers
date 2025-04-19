@class NSImage, NSImageView;

@interface CNBadgeViewController : NSViewController

@property (readonly, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSImage *image;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;

@end
