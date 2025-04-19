@protocol CNIntrinsicViewDelegate;

@interface CNIntrinsicView : NSView

@property (weak, nonatomic) id<CNIntrinsicViewDelegate> delegate;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
