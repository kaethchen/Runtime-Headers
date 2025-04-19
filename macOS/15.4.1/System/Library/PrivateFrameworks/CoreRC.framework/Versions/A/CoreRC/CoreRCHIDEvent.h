@interface CoreRCHIDEvent : NSObject <NSSecureCoding, NSCopying> {
    struct __IOHIDEvent { } *_event;
    struct __IOHIDEvent { } *_3rdPartyChildEvent;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct __IOHIDEvent { } *)event;
- (BOOL)isRepeat;
- (id)initWithCECUserControl:(struct CECUserControl { unsigned char x0; union CECUICommandOperand { struct CECChannelIdentifier { unsigned char x0 : 6; unsigned short x1 : 10; unsigned short x2 : 16; } x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; } x1; })a0 pressed:(BOOL)a1;
- (BOOL)getCECUserControl:(struct CECUserControl { unsigned char x0; union CECUICommandOperand { struct CECChannelIdentifier { unsigned char x0 : 6; unsigned short x1 : 10; unsigned short x2 : 16; } x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; } x1; } *)a0 pressed:(BOOL *)a1;
- (void)getCommand:(unsigned long long *)a0 pressed:(BOOL *)a1;
- (id)initKeyboardEventWithUsagePage:(unsigned int)a0 usageID:(unsigned int)a1 pressed:(BOOL)a2 timestamp:(unsigned long long)a3;
- (id)initWithCECAudioVolumeLevel:(unsigned char)a0;
- (id)initWithCECDeckControlMode:(unsigned char)a0 pressed:(BOOL)a1;
- (id)initWithCECPlayMode:(unsigned char)a0 pressed:(BOOL)a1;
- (id)initWithCommand:(unsigned long long)a0 pressed:(BOOL)a1;
- (id)initWithCommand:(unsigned long long)a0 pressed:(BOOL)a1 timestamp:(unsigned long long)a2;
- (id)initWithIOHIDEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)isEqualToRCHIDEvent:(id)a0;

@end
