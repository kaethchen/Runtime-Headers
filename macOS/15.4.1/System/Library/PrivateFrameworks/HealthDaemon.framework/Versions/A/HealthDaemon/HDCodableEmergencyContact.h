@class NSString;

@interface HDCodableEmergencyContact : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasNameContactIdentifier;
@property (retain, nonatomic) NSString *nameContactIdentifier;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) BOOL hasPhoneNumberContactIdentifier;
@property (retain, nonatomic) NSString *phoneNumberContactIdentifier;
@property (readonly, nonatomic) BOOL hasPhoneNumberLabel;
@property (retain, nonatomic) NSString *phoneNumberLabel;
@property (readonly, nonatomic) BOOL hasRelationship;
@property (retain, nonatomic) NSString *relationship;

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
