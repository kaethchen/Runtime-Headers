@class OTEscrowRecordMetadata, NSString;

@interface OTEscrowRecord : PBCodable <NSCopying> {
    struct { unsigned char coolOffEnd : 1; unsigned char creationDate : 1; unsigned char remainingAttempts : 1; unsigned char silentAttemptAllowed : 1; unsigned char recordStatus : 1; unsigned char recordViability : 1; unsigned char recoveryStatus : 1; unsigned char viabilityStatus : 1; } _has;
}

@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) unsigned long long creationDate;
@property (nonatomic) BOOL hasRemainingAttempts;
@property (nonatomic) unsigned long long remainingAttempts;
@property (readonly, nonatomic) BOOL hasEscrowInformationMetadata;
@property (retain, nonatomic) OTEscrowRecordMetadata *escrowInformationMetadata;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL hasSilentAttemptAllowed;
@property (nonatomic) unsigned long long silentAttemptAllowed;
@property (nonatomic) BOOL hasRecordStatus;
@property (nonatomic) int recordStatus;
@property (readonly, nonatomic) BOOL hasRecordId;
@property (retain, nonatomic) NSString *recordId;
@property (nonatomic) BOOL hasRecoveryStatus;
@property (nonatomic) int recoveryStatus;
@property (nonatomic) BOOL hasCoolOffEnd;
@property (nonatomic) unsigned long long coolOffEnd;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL hasRecordViability;
@property (nonatomic) int recordViability;
@property (nonatomic) BOOL hasViabilityStatus;
@property (nonatomic) int viabilityStatus;
@property (readonly, nonatomic) BOOL hasFederationId;
@property (retain, nonatomic) NSString *federationId;
@property (readonly, nonatomic) BOOL hasExpectedFederationId;
@property (retain, nonatomic) NSString *expectedFederationId;

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
- (int)StringAsRecordViability:(id)a0;
- (int)StringAsViabilityStatus:(id)a0;
- (int)StringAsRecordStatus:(id)a0;
- (int)StringAsRecoveryStatus:(id)a0;
- (id)recordStatusAsString:(int)a0;
- (id)recordViabilityAsString:(int)a0;
- (id)recoveryStatusAsString:(int)a0;
- (id)viabilityStatusAsString:(int)a0;

@end
