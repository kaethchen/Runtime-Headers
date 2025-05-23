@class NSString, HDCodableMessageVersion, NSData, HDCodableSyncIdentity;

@interface HDCodableFHIRCredential : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; unsigned char receivedDate : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier;
@property (readonly, nonatomic) BOOL hasAccountSyncIdentifier;
@property (retain, nonatomic) NSData *accountSyncIdentifier;
@property (readonly, nonatomic) BOOL hasScopeString;
@property (retain, nonatomic) NSString *scopeString;
@property (readonly, nonatomic) BOOL hasRequestedScopeString;
@property (retain, nonatomic) NSString *requestedScopeString;
@property (readonly, nonatomic) BOOL hasPatientID;
@property (retain, nonatomic) NSString *patientID;
@property (nonatomic) BOOL hasReceivedDate;
@property (nonatomic) double receivedDate;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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
