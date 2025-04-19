@class DelayedPopUpButtonCell;
@protocol OneStepBookmarkingButtonController;

@interface OneStepBookmarkingButton : RolloverImageButton

@property (retain) DelayedPopUpButtonCell *cell;
@property (retain, nonatomic) id<OneStepBookmarkingButtonController> controller;

+ (void)initialize;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityTitle;
- (void)mouseDown:(id)a0;
- (void)setCell:(id)a0;
- (void)_handleMouseDown:(id)a0;

@end
