@class NSString, NSMutableDictionary, NSArray, NSMutableArray;

@interface AXVCaptionTextView : NSTextView

@property (retain, nonatomic, setter=_setMutableCaptionTextHistory:) NSMutableArray *_mutableCaptionTextHistory;
@property (retain, nonatomic, setter=_setCaptionAttributes:) NSMutableDictionary *_captionAttributes;
@property (copy, nonatomic) NSString *captionText;
@property (nonatomic) double fontSize;
@property (readonly, copy, nonatomic) NSArray *captionTextHistory;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (BOOL)mouseDownCanMoveWindow;
- (void)_updateCaptionText;
- (void)_updateCaptionTextHistoryWithString:(id)a0;

@end
