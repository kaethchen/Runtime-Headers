@class NSImage, NSImageCell;

@interface AKTooManyAttemptsController : NSViewController

@property (retain, nonatomic) NSImageCell *imageView;
@property (retain, nonatomic) NSImage *displayImage;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ forgotAction;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (void)forgotButtonPressed:(id)a0;

@end
