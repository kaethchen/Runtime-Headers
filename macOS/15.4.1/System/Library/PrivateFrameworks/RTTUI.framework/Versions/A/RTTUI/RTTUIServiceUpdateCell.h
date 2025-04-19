@class NSTextView, RTTServiceUpdate;
@protocol RTTUIServiceCellDelegate;

@interface RTTUIServiceUpdateCell : NSView {
    NSTextView *_textView;
    RTTServiceUpdate *_serviceUpdate;
}

@property (weak, nonatomic) id<RTTUIServiceCellDelegate> delegate;

+ (double)heightForWidth:(double)a0 delegate:(id)a1 serviceUpdate:(id)a2;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayout;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToSuperview;
- (double)preferredHeightForWidth:(double)a0;
- (void)adjustTextViewSize;
- (id)initWithServiceUpdate:(id)a0;
- (struct CGSize { double x0; double x1; })preferredSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)serviceMessage;
- (id)serviceTitle;

@end
