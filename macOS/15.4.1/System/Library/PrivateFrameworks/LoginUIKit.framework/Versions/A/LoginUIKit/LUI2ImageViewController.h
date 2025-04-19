@class NSStackView, NSImageView, LUI2TextField;

@interface LUI2ImageViewController : LUI2ViewController

@property (retain) NSStackView *stackView;
@property (readonly) NSImageView *imageView;
@property (readonly) LUI2TextField *captionTextField;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
