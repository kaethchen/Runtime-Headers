@class NSTextField, NSString, AUHistoryView, NSImage, NSPopUpButton, NSBundle, AUNSFineSlider, AUParameterStripSizingManager, AUMeterView, NSButton;

@interface AUAdvancedParameterStrip : AUNSFlippedView {
    struct CAAUParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; struct AudioUnitParameterInfo { char x0[52]; struct __CFString *x1; unsigned int x2; struct __CFString *x3; unsigned int x4; float x5; float x6; float x7; unsigned int x8; } x4; struct __CFString *x5; struct __CFString *x6; short x7; struct __CFArray *x8; } *mAUP;
    struct AudioUnitParameterInfo { char name[52]; struct __CFString *unitName; unsigned int clumpID; struct __CFString *cfNameString; unsigned int unit; float minValue; float maxValue; float defaultValue; unsigned int flags; } mAUPI;
    NSBundle *mLocalizedStringBundle;
    NSBundle *mLocalizedParamUnitsBundle;
    struct AUListenerBase { } *mEventListener;
    NSString *mParameterName;
    NSTextField *mDisplayParameterName;
    NSTextField *mDisplayMinValue;
    NSTextField *mDisplayMaxValue;
    NSTextField *mDisplayUnit;
    AUNSFineSlider *mSlider;
    NSTextField *mTextInput;
    AUMeterView *mMeterView;
    AUHistoryView *mHistoryView;
    NSPopUpButton *mPopUpButton;
    NSButton *mBoolParamButton;
    BOOL mBoolParamIsWriteOnly;
    NSImage *mLEDImage[2];
    NSTextField *mStaticTextDisplay;
    NSString *mLastTextValue;
    NSImage *mGestureBackground;
    BOOL mParameterGestureIsOccurring;
}

@property AUParameterStripSizingManager *sizingManager;

+ (id)boldFontForControlSize;
+ (id)fontForControlSize;
+ (id)getTextFieldWithBoldText:(id)a0;
+ (id)getTextFieldWithString:(id)a0 attributes:(id)a1 width:(double)a2;
+ (void)initTextAttributes;
+ (void)setAppearanceOfTextField:(id)a0 data:(id)a1;

- (void)dealloc;
- (void)cleanup;
- (unsigned int)clumpID;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (id)keyView;
- (void)setAppearanceData:(id)a0;
- (void)issueEndGesture;
- (double)requiredCurrentValueStringWidth;
- (void)event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a0 occurredWithValue:(float)a1;
- (unsigned int)historyRefreshRate;
- (id)initWithAudioUnitParameter:(struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; })a0 eventListener:(struct AUListenerBase { } *)a1 width:(double)a2;
- (BOOL)isExpert;
- (void)issueBeginGesture;
- (BOOL)needsUpdates;
- (long long)numDigitsForValue:(double)a0 param:(const struct CAAUParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; struct AudioUnitParameterInfo { char x0[52]; struct __CFString *x1; unsigned int x2; struct __CFString *x3; unsigned int x4; float x5; float x6; float x7; unsigned int x8; } x4; struct __CFString *x5; struct __CFString *x6; short x7; struct __CFArray *x8; } *)a1;
- (id)privParamDisplayValue:(float)a0;
- (void)privUIWasAdjusted:(id)a0;
- (void)removeEventListener;
- (double)requiredMaxValueStringWidthDroppingTrailingZeros:(BOOL)a0;
- (double)requiredMinValueStringWidthDroppingTrailingZeros:(BOOL)a0;
- (double)requiredParamStringWidth;
- (double)requiredUnitsStringWidth;
- (void)synchronizeWithAU;
- (void)turnAutoresizingOn;
- (void)updateColumns;

@end
