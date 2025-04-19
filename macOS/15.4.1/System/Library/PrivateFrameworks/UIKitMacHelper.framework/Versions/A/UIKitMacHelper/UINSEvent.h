@class NSString;

@interface UINSEvent : NSObject

@property (nonatomic) BOOL isDown;
@property (nonatomic) long long modifierFlags;
@property (readonly, nonatomic) NSString *modifiedInput;
@property (readonly, nonatomic) NSString *unmodifiedInput;
@property (readonly, nonatomic) NSString *shiftModifiedInput;
@property (readonly, nonatomic) NSString *commandModifiedInput;
@property (readonly, nonatomic) unsigned long long timestampMachAbs;
@property (readonly, nonatomic) unsigned short virtualKeyCode;
@property (readonly, nonatomic) long long hidUsageCode;
@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) id nsEvent;
@property (readonly, nonatomic, getter=isDeadKey) BOOL deadKey;
@property (readonly, nonatomic) struct __CGEvent { } *cgEvent;

+ (int)HIDUsageCodeForCharacter:(unsigned short)a0 modifiers:(unsigned long long)a1;
+ (id)charactersForHIDUsageCode:(unsigned short)a0 modifiers:(unsigned int)a1;

- (void).cxx_destruct;
- (id)charactersByApplyingModifiers:(unsigned long long)a0;
- (id)initWithNSEvent:(id)a0 contextId:(unsigned int)a1;

@end
