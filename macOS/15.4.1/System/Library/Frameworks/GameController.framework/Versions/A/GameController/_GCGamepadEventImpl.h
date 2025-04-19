@class NSString;

@interface _GCGamepadEventImpl : NSObject <_GCGamepadEvent> {
    struct { unsigned long long mask; float buttons[47]; } _data;
}

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) float dpadUpValue;
@property (nonatomic) float dpadDownValue;
@property (nonatomic) float dpadLeftValue;
@property (nonatomic) float dpadRightValue;
@property (nonatomic) float buttonAValue;
@property (nonatomic) float buttonBValue;
@property (nonatomic) float buttonXValue;
@property (nonatomic) float buttonYValue;
@property (nonatomic) float buttonLeftShoulder;
@property (nonatomic) float buttonRightShoulder;
@property (nonatomic) float leftThumbstickUp;
@property (nonatomic) float leftThumbstickDown;
@property (nonatomic) float leftThumbstickLeft;
@property (nonatomic) float leftThumbstickRight;
@property (nonatomic) float rightThumbstickUp;
@property (nonatomic) float rightThumbstickDown;
@property (nonatomic) float rightThumbstickLeft;
@property (nonatomic) float rightThumbstickRight;
@property (nonatomic) float leftTrigger;
@property (nonatomic) float rightTrigger;
@property (nonatomic) float leftThumbstickButton;
@property (nonatomic) float rightThumbstickButton;
@property (nonatomic) float buttonHome;
@property (nonatomic) float buttonMenu;
@property (nonatomic) float buttonOptions;
@property (nonatomic) float buttonSpecial0;
@property (nonatomic) float buttonSpecial1;
@property (nonatomic) float buttonSpecial2;
@property (nonatomic) float buttonSpecial3;
@property (nonatomic) float buttonSpecial4;
@property (nonatomic) float buttonSpecial5;
@property (nonatomic) float buttonSpecial6;
@property (nonatomic) float buttonSpecial7;
@property (nonatomic) float buttonSpecial8;
@property (nonatomic) float buttonSpecial9;
@property (nonatomic) float buttonSpecial10;
@property (nonatomic) float buttonSpecial11;
@property (nonatomic) float buttonSpecial12;
@property (nonatomic) float buttonSpecial13;
@property (nonatomic) float buttonSpecial14;
@property (nonatomic) float buttonSpecial15;
@property (nonatomic) float buttonLeftBumper;
@property (nonatomic) float buttonRightBumper;
@property (nonatomic) float buttonBackLeftPrimary;
@property (nonatomic) float buttonBackLeftSecondary;
@property (nonatomic) float buttonBackRightPrimary;
@property (nonatomic) float buttonBackRightSecondary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)floatValueForElement:(long long)a0;
- (BOOL)hasValidValueForElement:(long long)a0;
- (id)initWithGamepadEvent:(id)a0;
- (id)initWithTimeStamp:(unsigned long long)a0 inputs:(float[47])a1 validMask:(unsigned long long)a2;
- (void)setFloatValue:(float)a0 forElement:(long long)a1;

@end
