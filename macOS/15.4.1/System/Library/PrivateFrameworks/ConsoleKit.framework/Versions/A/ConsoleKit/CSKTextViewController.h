@class NSTextView, NSScrollView;

@interface CSKTextViewController : NSViewController

@property (nonatomic) NSTextView *textView;
@property (weak, nonatomic) NSScrollView *scrollView;

- (id)init;
- (void).cxx_destruct;
- (void)setText:(id)a0;

@end
