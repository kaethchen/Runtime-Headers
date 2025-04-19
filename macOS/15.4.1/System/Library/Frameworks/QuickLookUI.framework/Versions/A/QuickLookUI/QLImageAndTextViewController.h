@class NSTextField, QLImageAndTextPropertySlice, NSView, NSLayoutConstraint, NSMutableArray;

@interface QLImageAndTextViewController : NSViewController

@property (retain, nonatomic) NSTextField *titleField;
@property (retain, nonatomic) NSTextField *subTitleField;
@property (retain, nonatomic) NSTextField *errorField;
@property (retain, nonatomic) NSView *dividerLine;
@property (retain, nonatomic) NSView *slicesContainerView;
@property (retain, nonatomic) NSLayoutConstraint *lastSliceToBottomConstraint;
@property (retain, nonatomic) QLImageAndTextPropertySlice *propertySlice1;
@property (retain, nonatomic) NSView *iconView;
@property (readonly) NSMutableArray *propertySlices;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)addPropertySlice:(id)a0;
- (void)setErrorText:(id)a0;

@end
