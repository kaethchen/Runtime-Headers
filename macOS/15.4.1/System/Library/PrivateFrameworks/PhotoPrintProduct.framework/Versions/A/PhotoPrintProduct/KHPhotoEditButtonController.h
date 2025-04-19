@class NSButton, NSArray;

@interface KHPhotoEditButtonController : UXViewController

@property (readonly, nonatomic) NSButton *editButton;
@property (retain, nonatomic) NSArray *frames;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)editPhoto:(id)a0;

@end
