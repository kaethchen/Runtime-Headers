@interface AUPannerView : NSView

@property (readonly) struct OpaqueAudioComponentInstance { } *audioUnit;

+ (id)AUPannerViewWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;

- (void)setAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;

@end
