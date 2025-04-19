@interface ACSHActionPressKeyCode : ACSHAction

@property (nonatomic) BOOL usesMacKeyCode;
@property (nonatomic) unsigned long long usbKeyCode;
@property (nonatomic) unsigned long long macKeyCode;
@property (nonatomic) long long keyboardHWType;
@property (nonatomic) unsigned long long modifiers;
@property (nonatomic) BOOL shouldExecuteSystemFunction;
@property (nonatomic) BOOL shouldNotLockModifierKey;

+ (id)actionWithMacKeyCode:(unsigned long long)a0 keyboardHWType:(long long)a1 modifiers:(unsigned long long)a2;
+ (id)actionWithUSBKeyCode:(unsigned long long)a0 keyboardHWType:(long long)a1 modifiers:(unsigned long long)a2;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)displayString;
- (void)repeatEndedWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (BOOL)_hasAssociatedSoundForDoubleAction:(BOOL)a0;
- (void)_performDoubleAction:(BOOL)a0 eventSourceData:(id)a1 keyDown:(BOOL)a2;
- (BOOL)hasAssociatedSound;
- (BOOL)hasAssociatedSoundForDoubleAction;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performDeactivateWithEventSourceData:(id)a0;
- (void)performDoubleActionWithEventSourceData:(id)a0;
- (void)performWithEventSourceData:(id)a0;
- (BOOL)shouldPerformDoubleActionIfPossible;

@end
