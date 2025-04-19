@class NSString, NSFont;

@interface CalUIHyperlinkTextView : NSTextView <NSTextViewDelegate>

@property (retain) NSFont *defaultFont;
@property long long defaultAlignment;
@property (weak) id target;
@property SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)configureWithText:(id)a0 linkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithFont:(id)a0 alignment:(long long)a1;

@end
