@class NSString, NSDictionary, HDCodableNotificationInstructionMessage, NSDate, HDNotificationInstructionCriteria;

@interface HDNotificationInstructionMessage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *sendingDeviceInfo;
@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) HDNotificationInstructionCriteria *criteria;
@property (readonly, copy, nonatomic) NSDictionary *messageDictionary;
@property (readonly, copy, nonatomic) HDCodableNotificationInstructionMessage *codableMessage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCodableNotificationInstructionMessage:(id)a0 criteriaClasses:(id)a1;
- (id)initWithCreationDate:(id)a0 sendingDeviceInfo:(id)a1 action:(long long)a2 clientIdentifier:(id)a3 categoryIdentifier:(id)a4 expirationDate:(id)a5 criteria:(id)a6;
- (id)initWithMessageDictionary:(id)a0 criteriaClasses:(id)a1;

@end
