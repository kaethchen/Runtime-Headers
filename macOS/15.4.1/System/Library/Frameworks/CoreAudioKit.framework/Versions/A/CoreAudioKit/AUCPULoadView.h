@class NSTextField, NSString, NSStepper, NSButton;

@interface AUCPULoadView : AUCocoaPropertyControlBase {
    NSButton *mCheckbox;
    NSStepper *mStepper;
    NSTextField *mTextField;
    NSString *mLocalizedString_NotApplicable;
    NSString *mLocalizedString_PercentSymbol;
}

+ (BOOL)CPULoadSupportedForAU:(struct OpaqueAudioComponentInstance { } *)a0;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 au:(struct OpaqueAudioComponentInstance { } *)a1 listener:(struct AUListenerBase { } *)a2 localizationBundle:(id)a3;
- (double)privCheckboxOffset;
- (double)privControlLocation;
- (void)privUIWasAdjusted:(id)a0;
- (void)synchronizeUI;

@end
