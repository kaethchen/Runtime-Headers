@class NSString, NSData, BKSHIDKeyboardDevice;
@protocol BSInvalidatable;

@interface _BKSHIDKeyboardDeviceClientProxy : NSObject <BKSHIDKeyboardDevicePropertiesProviding, BSDescriptionStreaming> {
    BKSHIDKeyboardDevice *_device;
    id<BSInvalidatable> _lifetimeAssertion;
}

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSString *transport;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *layout;
@property (readonly, copy, nonatomic) NSString *exclusivityIdentifier;
@property (readonly, copy, nonatomic) NSData *platformInputModeConfiguration;
@property (readonly, nonatomic) unsigned char countryCode;
@property (readonly, nonatomic) unsigned int standardType;
@property (readonly, nonatomic) long long subinterfaceID;
@property (readonly, nonatomic) BOOL capsLockKeyHasLanguageSwitchLabel;
@property (readonly, nonatomic) BOOL globeKeyLabelHasGlobeSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)appendDescriptionToStream:(id)a0;
- (id)_properties;
- (id)initWithDevice:(id)a0 lifetimeAssertion:(id)a1;

@end
