@interface AUDiskStreamingCheckbox : NSButton {
    struct OpaqueAudioComponentInstance { } *mAudioUnit;
    struct AUListenerBase { } *mEventListener;
    BOOL hasEventListener;
}

+ (BOOL)diskStreamingSupportedForAU:(struct OpaqueAudioComponentInstance { } *)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)addEventListener;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 au:(struct OpaqueAudioComponentInstance { } *)a1 listener:(struct AUListenerBase { } *)a2 localizationBundle:(id)a3;
- (void)privUIWasAdjusted:(id)a0;
- (void)removeEventListener;
- (void)synchronizeUI;

@end
