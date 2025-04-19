@interface EKUISendRevertGadget : EKUIThreeButtonGadget

+ (id)showTitle;
+ (id)applyTitle;
+ (id)cancelTitle;
+ (id)deleteTitle;
+ (id)forwardTitle;
+ (id)proposeTitle;
+ (id)removeTitle;
+ (id)replyTitle;
+ (id)revertTitle;
+ (id)sendTitle;
+ (id)showOriginalTitle;
+ (id)updateTitle;

- (BOOL)_useApplyButton;
- (BOOL)_useReplyButton;
- (BOOL)_useCancelProposalButton;
- (BOOL)_useDeleteButton;
- (BOOL)_useForwardButton;
- (BOOL)_useProposeButton;
- (BOOL)_useRemoveTextForDeleteButton;
- (BOOL)_useRevertButton;
- (BOOL)_useSendButton;
- (BOOL)_useUpdateButton;
- (void)firstButtonClicked:(id)a0;
- (id)firstButtonTitle;
- (id)firstButtonTitles;
- (void)secondButtonClicked:(id)a0;
- (id)secondButtonTitle;
- (id)secondButtonTitles;
- (BOOL)shouldDisplay;
- (void)thirdButtonClicked:(id)a0;
- (id)thirdButtonTitle;
- (id)thirdButtonTitles;

@end
