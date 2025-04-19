@class NSImageView, NSBox, NSArrayController, NSTextField, AMDescriptionViewItem, NSStackView;

@interface AMDescriptionViewController : NSViewController

@property (weak, nonatomic) NSArrayController *itemsController;
@property (weak, nonatomic) NSBox *contentBox;
@property (weak, nonatomic) NSImageView *imageView;
@property (weak, nonatomic) NSTextField *nameTextField;
@property (weak, nonatomic) NSTextField *summaryTextField;
@property (weak, nonatomic) NSStackView *itemsContainer;
@property (retain, nonatomic) AMDescriptionViewItem *descriptionViewItem;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)scrollToTop;

@end
