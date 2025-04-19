@class NSArray, NSString, NSData, NSMutableDictionary;

@interface ACSHKeyboardLayout : NSObject

@property (class, readonly, nonatomic) NSArray *_allRelevantModifierMaskCombinations;
@property (class, readonly, nonatomic) ACSHKeyboardLayout *keyboardLayoutForCurrentKeyboardType;
@property (class, readonly, nonatomic) NSArray *relevantModifiers;

@property (copy, nonatomic) NSString *currentInputSourceName;
@property (retain, nonatomic) NSData *_ucData;
@property (retain) NSMutableDictionary *keyCapsByModifiersAndDeadKeyState;
@property unsigned char keyboardHWType;
@property struct UCKeyboardLayout { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; struct UCKeyboardTypeHeader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x4[1]; } *ucKeyboardLayout;

+ (unsigned long long)relevantModifiersFromModifiers:(unsigned long long)a0;
+ (unsigned long long)_functionMappedMacKeyCodeForMacKeyCode:(unsigned long long)a0 modifiers:(unsigned int)a1;
+ (id)keyboardLayoutForHWType:(unsigned char)a0;
+ (void)updateInputSourceForAllLayouts;

- (id)description;
- (void).cxx_destruct;
- (unsigned int)_carbonModifiersForNSModifiers:(unsigned long long)a0;
- (void)_clearKeyCapsCache;
- (void)_setKeyboardHWType:(unsigned char)a0;
- (id)initWithKeyboardHWType:(unsigned char)a0;
- (id)keyCapsByModifierMaskForUSBKeyCode:(unsigned long long)a0 deadKeyState:(unsigned int)a1;
- (BOOL)macKeyCodeIsModifiedByCapsLock:(unsigned long long)a0 modifiers:(unsigned long long)a1 deadKeyState:(unsigned int)a2;
- (id)stringFromMacKeyCode:(unsigned long long)a0 modifiers:(unsigned int)a1 deadKeyState:(unsigned int)a2 isDeadKey:(BOOL *)a3;
- (id)stringFromUSBKeyCode:(unsigned long long)a0 modifiers:(unsigned int)a1 deadKeyState:(unsigned int)a2 isDeadKey:(BOOL *)a3;
- (void)updateInputSource;
- (BOOL)usbKeyCodeIsModifiedByCapsLock:(unsigned long long)a0 modifiers:(unsigned long long)a1 deadKeyState:(unsigned int)a2;

@end
