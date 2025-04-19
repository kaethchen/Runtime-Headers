@class NSView;

@interface AVAudioPlaybackControlsViewController : AVPlayerControlsViewController {
    NSView *_initialFirstResponder;
    id /* block */ _nextKeyViewSetupBlock;
}

- (void).cxx_destruct;
- (id)initialFirstResponder;
- (void)loadView;
- (long long)layoutStyle;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (long long)preferredBlendingMode;
- (long long)preferredEffectMaterial;
- (void)setupNextKeyView;

@end
