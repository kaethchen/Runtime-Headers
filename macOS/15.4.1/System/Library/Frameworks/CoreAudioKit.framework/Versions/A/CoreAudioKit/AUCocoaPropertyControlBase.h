@interface AUCocoaPropertyControlBase : AUNSFlippedView {
    struct OpaqueAudioComponentInstance { } *mAudioUnit;
    unsigned int mPropertyID;
    struct AUListenerBase { } *mEventListener;
    BOOL hasEventListener;
}

+ (BOOL)property:(unsigned int)a0 withSize:(unsigned int)a1 supportedForAU:(struct OpaqueAudioComponentInstance { } *)a2;
+ (BOOL)propertyIsWritable:(unsigned int)a0 supportedForAU:(struct OpaqueAudioComponentInstance { } *)a1;
+ (unsigned int)propertySize:(unsigned int)a0 supportedForAU:(struct OpaqueAudioComponentInstance { } *)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)addEventListener;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 au:(struct OpaqueAudioComponentInstance { } *)a1 property:(unsigned int)a2 listener:(struct AUListenerBase { } *)a3 localizationBundle:(id)a4;
- (void)removeEventListener;

@end
