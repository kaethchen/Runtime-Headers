@interface SOTypingIndicatorCollectionViewItem : SOTranscriptCollectionViewItem

@property (class, readonly) struct CGSize { double x0; double x1; } itemSize;

- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)typingIndicatorView;
- (void)startShrinkAnimationWithCompletion:(id /* block */)a0;
- (void)startTypingAnimation:(BOOL)a0;
- (void)stopTypingAnimation;

@end
