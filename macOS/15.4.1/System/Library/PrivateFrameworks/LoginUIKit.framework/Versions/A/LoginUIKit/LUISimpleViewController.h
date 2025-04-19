@class NSLayoutConstraint, NSString, NSTextField;

@interface LUISimpleViewController : LUIPopoverViewController

@property (retain) NSTextField *messageTextField;
@property (retain) NSTextField *informationTextField;
@property (retain) NSLayoutConstraint *constraint;
@property (copy) NSString *message;
@property (copy) NSString *information;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)prepareForDisplay;
- (void)_layoutContentView;

@end
