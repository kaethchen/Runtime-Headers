@class NSDate;

@interface NFFieldNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) BOOL cachedBeforeRFReset;
@property (nonatomic) long long category;
@property (readonly) unsigned long long notificationType;
@property (readonly) unsigned int rfTechnology;
@property (readonly) unsigned short typeFSystemCode;

+ (id)fieldNotificationFromXPCObject:(id)a0;
+ (id)notificationWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setNotificationType:(unsigned long long)a0;
- (id)_creationDateString;
- (id)asXPCObject;
- (unsigned long long)chFieldType;
- (id)chRandomData;
- (id)initWithNotificationType:(unsigned long long)a0 rfTechnology:(unsigned int)a1 typeFSystemCode:(unsigned short)a2 creationDate:(id)a3 cachedBeforeRFReset:(BOOL)a4;
- (BOOL)isCHAutoNegotiationField;
- (BOOL)isCHInitiatorDetected;
- (BOOL)isCHReceiverDetected;
- (BOOL)isCHTerminal;
- (BOOL)isEqualTerminalInfo:(id)a0;
- (BOOL)isEqualWithoutRFTech:(id)a0;

@end
