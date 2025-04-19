@class NSArray, NSMutableDictionary, NSData;

@interface NFFieldNotificationECP2_0 : NFFieldNotification <NSCopying>

@property (nonatomic) BOOL ignoreRFTechOnIsEqual;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly) BOOL odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned long long terminalType;
@property (readonly) unsigned char terminalSubType;
@property (readonly, retain) NSArray *tciArray;
@property (readonly, retain) NSData *openLoopSchemeBitfield;
@property (readonly, retain) NSData *homeKitSchemeDataPayload;
@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) unsigned int pairingMode;
@property (readonly) NSData *terminalTypeData;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)_initCategoryWithType:(unsigned long long)a0 subType:(unsigned char)a1;
- (id)_parseCHTerminalTypeData:(id)a0;
- (id)initWithNotificationType:(unsigned long long)a0 rfTechnology:(unsigned int)a1 typeFSystemCode:(unsigned short)a2 creationDate:(id)a3 cachedBeforeRFReset:(BOOL)a4 odaRequired:(BOOL)a5 terminalMode:(unsigned int)a6 terminalType:(unsigned long long)a7 terminalSubType:(unsigned char)a8 tciArray:(id)a9 openLoopSchemeBitfield:(id)a10 homeKitSchemeDataPayload:(id)a11 readerIdentifier:(id)a12 pairingMode:(unsigned int)a13 terminalTypeData:(id)a14 ignoreRFTechOnIsEqual:(BOOL)a15 userInfo:(id)a16;

@end
