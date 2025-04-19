@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;
@protocol ACSHFunctionKeyMapperDelegate;

@interface ACSHFunctionKeyMapper : NSObject {
    struct __IOHIDEventSystemClient { } *_ioHIDEventSystemClient;
}

@property (class, readonly, nonatomic) ACSHFunctionKeyMapper *sharedFunctionKeyMapper;
@property (class, readonly, nonatomic) NSArray *orderedFunctionKeyMacKeyCodes;
@property (class, readonly, nonatomic) NSDictionary *specialKeyCodesbySystemActionMap;
@property (class, readonly, nonatomic) NSDictionary *appleEventsBySystemActionMap;
@property (class, readonly, nonatomic) NSArray *macKeyCodesRequiringSecondaryFN;

@property (nonatomic) struct IONotificationPort { } *notificationPort;
@property unsigned int keyboardConnectedIterator;
@property unsigned int keyboardDisconnectedIterator;
@property (retain) NSMutableDictionary *systemActionKeyCodeMapsByIdentifier;
@property (retain) NSMutableDictionary *preDFRSystemActionKeyCodeMapsByIdentifier;
@property (retain) NSMutableDictionary *keyboardMacKeyCodeMapsByIdentifier;
@property (retain) NSMutableArray *orderedKeyboardIdentifiers;
@property (nonatomic) BOOL fnKeyMode;
@property (readonly, nonatomic) BOOL fKeysShouldBeStandardFunctionKeysByDefault;
@property (weak) id<ACSHFunctionKeyMapperDelegate> delegate;

+ (id)_fKeyMacKeyCodeMapByAddingDFRActionIfNeeded:(id)a0;
+ (id)_fKeyModifiedMacKeyCodeMapForDevice:(unsigned int)a0;
+ (id)_fallbackFKeyModifiedMacKeyCodeMap;
+ (id)_fallbackSystemActionTypeByFKeyMacKeyCodeMap;
+ (unsigned long long)_hidValueForPage:(unsigned long long)a0 code:(unsigned long long)a1;
+ (id)_regularKeyCodesAndModifiersBySystemActionMap;
+ (id)_regularSystemKeyCodesRequiringSecondaryFN;
+ (id)_systemActionTypeByFKeyMacKeyCodeMapForDevice:(unsigned int)a0 addingDFR:(BOOL)a1;
+ (id)_systemActionTypesByHIDCode;
+ (BOOL)deviceIsKeyboard:(unsigned int)a0;
+ (id)functionKeyMapForDevice:(unsigned int)a0 ioKitKey:(id)a1;
+ (unsigned long long)macKeyCodeForKeyHIDData:(unsigned int)a0;
+ (unsigned long long)regularKeyCodeForSystemActionType:(unsigned long long)a0 returningModifiers:(unsigned long long *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_removeDevice:(unsigned int)a0;
- (void)_addDevice:(unsigned int)a0;
- (void)_createNotificationPortIfNeeded;
- (void)_configureIOHIDSystemClientIfNeeded;
- (void)_connectedCallback:(unsigned int)a0;
- (void)_disconnectedCallback:(unsigned int)a0;
- (void)_dynamicFunctionRowAvailableChanged;
- (void)_ioHIDPropertyChangedForProperty:(id)a0 value:(id)a1;
- (void)_registerForDFRNotifications;
- (void)_registerForNotificationsIfNeeded;
- (void)_updateFNKeyMode;
- (unsigned long long)fKeyModifiedMacKeyCodeForMacKeyCode:(unsigned long long)a0;
- (unsigned long long)fKeyModifiedMacKeyCodeForUSBKeyCode:(unsigned long long)a0;
- (struct __IOHIDEventSystemClient { } *)ioHIDEventSystemClient;
- (void)setIoHIDEventSystemClient:(struct __IOHIDEventSystemClient { } *)a0;
- (unsigned long long)systemActionForFunctionKeyMacKeyCode:(unsigned long long)a0;
- (unsigned long long)systemActionForFunctionKeyUSBKeyCode:(unsigned long long)a0;
- (unsigned long long)systemActionTypeForHIDUsagePage:(unsigned long long)a0 usage:(unsigned long long)a1;

@end
