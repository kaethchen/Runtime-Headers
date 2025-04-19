@class NSString, HDCodableNotificationInstructionCriteria;

@interface HDCodableNotificationInstructionMessage : PBCodable <NSCopying> {
    struct { unsigned char action : 1; unsigned char creationDateTimeInterval : 1; unsigned char currentCompatibilityVersion : 1; unsigned char expirationDateTimeInterval : 1; unsigned char minimumCompatibleVersion : 1; } _has;
}

@property (nonatomic) BOOL hasCurrentCompatibilityVersion;
@property (nonatomic) long long currentCompatibilityVersion;
@property (nonatomic) BOOL hasMinimumCompatibleVersion;
@property (nonatomic) long long minimumCompatibleVersion;
@property (nonatomic) BOOL hasCreationDateTimeInterval;
@property (nonatomic) double creationDateTimeInterval;
@property (readonly, nonatomic) BOOL hasSendingDeviceInfo;
@property (retain, nonatomic) NSString *sendingDeviceInfo;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) long long action;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) BOOL hasCategoryIdentifier;
@property (retain, nonatomic) NSString *categoryIdentifier;
@property (nonatomic) BOOL hasExpirationDateTimeInterval;
@property (nonatomic) double expirationDateTimeInterval;
@property (readonly, nonatomic) BOOL hasCriteria;
@property (retain, nonatomic) HDCodableNotificationInstructionCriteria *criteria;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
