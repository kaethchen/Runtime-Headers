@protocol DelayedPopUpRolloverImageButtonDelegate;

@interface DelayedPopUpRolloverImageButton : RolloverImageButton

@property (weak, nonatomic) id<DelayedPopUpRolloverImageButtonDelegate> delegate;

+ (Class)cellClass;

- (id)menu;

@end
