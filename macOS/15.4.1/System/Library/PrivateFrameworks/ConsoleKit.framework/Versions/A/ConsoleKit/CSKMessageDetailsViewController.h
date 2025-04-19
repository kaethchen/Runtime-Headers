@class NSFont, CSKTextViewController, CSKMessage;

@interface CSKMessageDetailsViewController : CSKDetailsViewController

@property (retain, nonatomic) CSKTextViewController *textViewController;
@property (retain, nonatomic) CSKMessage *message;
@property (retain, nonatomic) NSFont *defaultFont;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (void)_updateMessageDetailsWithCurrentMessage;
- (void)_updateTextViewFont:(id)a0;
- (id)tabViewController:(id)a0 viewForTabItemAtIndex:(unsigned long long)a1;

@end
