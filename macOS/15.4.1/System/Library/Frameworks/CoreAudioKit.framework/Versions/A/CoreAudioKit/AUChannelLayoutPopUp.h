@class NSPopUpButton, NSTextField;

@interface AUChannelLayoutPopUp : AUNSFlippedView {
    NSTextField *mTitle;
    NSTextField *mLayoutField;
    NSPopUpButton *mPopUpButton;
    struct OpaqueAudioComponentInstance { } *mAudioUnit;
    struct AUListenerBase { } *mEventListener;
    BOOL hasEventListener;
}

+ (BOOL)channelLayoutSupportedForAU:(struct OpaqueAudioComponentInstance { } *)a0;

- (void)dealloc;
- (void)viewWillMoveToWindow:(id)a0;
- (void)rebuildUI;
- (void)addEventListener;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 au:(struct OpaqueAudioComponentInstance { } *)a1 listener:(struct AUListenerBase { } *)a2 localizationBundle:(id)a3;
- (void)privUIWasAdjusted:(id)a0;
- (void)removeEventListener;
- (void)synchronizeUI;

@end
