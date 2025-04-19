@class NSPopUpButton, NSTextField;

@interface AURenderQualityPopUp : AUCocoaPropertyControlBase {
    NSTextField *mTitle;
    NSPopUpButton *mPopUpButton;
}

+ (id)getTextFieldWithText:(id)a0;
+ (BOOL)renderQualitySupportedForAU:(struct OpaqueAudioComponentInstance { } *)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 au:(struct OpaqueAudioComponentInstance { } *)a1 listener:(struct AUListenerBase { } *)a2 localizationBundle:(id)a3;
- (double)privControlLocation;
- (void)privUIWasAdjusted:(id)a0;
- (void)synchronizeUI;

@end
