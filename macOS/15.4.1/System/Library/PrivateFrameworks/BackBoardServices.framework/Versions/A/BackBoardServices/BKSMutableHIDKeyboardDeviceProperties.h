@class NSString, NSData;

@interface BKSMutableHIDKeyboardDeviceProperties : BKSHIDKeyboardDeviceProperties

@property (nonatomic) unsigned long long senderID;
@property (copy, nonatomic) NSString *transport;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *layout;
@property (copy, nonatomic) NSString *exclusivityIdentifier;
@property (copy, nonatomic) NSData *platformInputModeConfiguration;
@property (nonatomic) unsigned char countryCode;
@property (nonatomic) unsigned int standardType;
@property (nonatomic) long long subinterfaceID;
@property (nonatomic) BOOL capsLockKeyHasLanguageSwitchLabel;
@property (nonatomic) BOOL globeKeyLabelHasGlobeSymbol;

- (void)setLanguage:(id)a0;
- (void)setLayout:(id)a0;
- (void)setCountryCode:(unsigned char)a0;
- (void)setSenderID:(unsigned long long)a0;
- (void)setTransport:(id)a0;
- (void)setGlobeKeyLabelHasGlobeSymbol:(BOOL)a0;
- (void)setCapsLockKeyHasLanguageSwitchLabel:(BOOL)a0;
- (void)setExclusivityIdentifier:(id)a0;
- (void)setPlatformInputModeConfiguration:(id)a0;
- (void)setStandardType:(unsigned int)a0;
- (void)setSubinterfaceID:(long long)a0;

@end
