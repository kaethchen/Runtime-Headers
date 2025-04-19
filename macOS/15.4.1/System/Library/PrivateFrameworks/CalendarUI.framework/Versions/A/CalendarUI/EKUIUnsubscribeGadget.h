@interface EKUIUnsubscribeGadget : EKUIThreeButtonGadget

+ (id)showTitle;
+ (id)interestedChangeKeys;
+ (id)unsubscribeTitle;

- (void)firstButtonClicked:(id)a0;
- (id)firstButtonTitle;
- (id)firstButtonTitles;
- (BOOL)shouldDisplay;
- (void)thirdButtonClicked:(id)a0;
- (id)thirdButtonTitle;
- (id)thirdButtonTitles;

@end
