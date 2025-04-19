@class NSSet;

@interface AXEKeyboard : NSObject {
    struct __CGEventSource { } *__eventSource;
}

@property (class, readonly) AXEKeyboard *shared;

@property (nonatomic) unsigned int _eventTapLocation;
@property (nonatomic) unsigned long long _modifierFlags;
@property (readonly, nonatomic) BOOL isAnyKeyDown;
@property (readonly, nonatomic) BOOL isAnyModifierDown;
@property (readonly, nonatomic) BOOL isCommandDown;
@property (readonly, nonatomic) BOOL isOptionDown;
@property (readonly, nonatomic) BOOL isControlDown;
@property (readonly, nonatomic) BOOL isShiftDown;
@property (readonly, nonatomic) BOOL isFnDown;
@property (readonly, nonatomic) BOOL isCapsLockDown;
@property (readonly, copy, nonatomic) NSSet *downKeys;
@property (readonly, nonatomic) BOOL _supportsBuiltinEscKey;

+ (id)modifierFlagTable;

- (void)dealloc;
- (void)_setModifierFlags:(unsigned long long)a0;
- (struct __CGEventSource { } *)_eventSource;
- (void)_clearModifierFlags:(unsigned long long)a0;
- (id)_initWithEventTapLocation:(unsigned int)a0;
- (BOOL)isKeyDown:(unsigned long long)a0;
- (void)pressKey:(unsigned long long)a0;
- (void)releaseKey:(unsigned long long)a0;

@end
