@class NSString;

@interface AXEKeyboardEvent : NSObject <NSCopying>

@property (nonatomic) unsigned long long keyCode;
@property (copy, nonatomic) NSString *unicodeCharacter;
@property BOOL isDownEvent;
@property BOOL isRepeatEvent;
@property BOOL isModifierChangedEvent;
@property BOOL isCommandDown;
@property BOOL isLeftCommandDown;
@property BOOL isRightCommandDown;
@property BOOL isOptionDown;
@property BOOL isLeftOptionDown;
@property BOOL isRightOptionDown;
@property BOOL isControlDown;
@property BOOL isLeftControlDown;
@property BOOL isRightControlDown;
@property BOOL isShiftDown;
@property BOOL isLeftShiftDown;
@property BOOL isRightShiftDown;
@property BOOL isFnDown;
@property BOOL isArrowKeyDown;
@property BOOL isSynthesized;
@property (nonatomic) unsigned long long _flags;
@property (nonatomic) struct __CGEvent { } *_cgEvent;
@property (readonly) BOOL isDown;
@property (readonly) BOOL isRepeat;
@property (readonly) long long modifierMask;

+ (id)eventFromCGEvent:(struct __CGEvent { } *)a0;
+ (BOOL)isArrowKey:(unsigned long long)a0;
+ (BOOL)isKeyboardEvent:(struct __CGEvent { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isHotkeyComboDownWithCharCode:(unsigned short)a0 keyCode:(unsigned short)a1 modifiers:(unsigned int)a2;

@end
