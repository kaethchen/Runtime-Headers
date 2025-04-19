@class SCREventFactory;

@interface SCREventCapsLockDetector : NSObject

@property (nonatomic) double _repeatedKeyPressTimeout;
@property (nonatomic) BOOL _isEchoLockKeysEnabled;
@property (nonatomic) BOOL _isCapsLockSupportConfirmed;
@property (nonatomic) unsigned long long _unhandledVOEventCount;
@property (weak, nonatomic) SCREventFactory *_eventFactory;
@property (nonatomic) BOOL keyState;
@property (nonatomic) BOOL modifierState;
@property (nonatomic) long long voiceOverModifierSetting;
@property (readonly, nonatomic) BOOL supportsCapsLockAsVoiceOverModifier;
@property (readonly, nonatomic) BOOL voiceOverModifierState;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_announceCapsLockState:(long long)a0;
- (void)_handleKeyDown;
- (void)_handleKeyUpWithModifierState:(BOOL)a0;
- (id)initWithEventFactory:(id)a0;
- (void)receivedKeyPressWithControlAndOption:(BOOL)a0;
- (void)updateWithKeyState:(BOOL)a0 modifierState:(BOOL)a1;

@end
