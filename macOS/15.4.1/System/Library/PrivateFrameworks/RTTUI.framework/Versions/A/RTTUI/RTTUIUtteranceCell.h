@class RTTUtterance, NSString, NSTextView, TTYStretchImageView;
@protocol RTTUIUtteranceCellDelegate;

@interface RTTUIUtteranceCell : NSView <NSTextViewDelegate> {
    NSTextView *_textView;
    TTYStretchImageView *_bubbleView;
}

@property (retain, nonatomic) RTTUtterance *utterance;
@property (nonatomic, getter=isEditingUtterance) BOOL editingUtterance;
@property (weak, nonatomic) id<RTTUIUtteranceCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForUtterance:(id)a0 andWidth:(double)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (void)textDidChange:(id)a0;
- (void)updateLayout;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToSuperview;
- (double)preferredHeightForWidth:(double)a0;
- (void)adjustTextViewSize;
- (struct CGSize { double x0; double x1; })preferredSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSendProgressIndex:(unsigned long long)a0;
- (void)updateUtterance:(id)a0;
- (void)updateUtterance:(id)a0 postNotifications:(BOOL)a1;
- (id)utteranceTextColor;

@end
