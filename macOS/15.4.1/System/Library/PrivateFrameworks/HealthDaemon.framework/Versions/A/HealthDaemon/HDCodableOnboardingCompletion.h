@class NSData, NSString, HDCodableSyncIdentity;

@interface HDCodableOnboardingCompletion : PBCodable <NSCopying> {
    struct { unsigned char completionDate : 1; unsigned char countryCodeProvenance : 1; unsigned char modificationDate : 1; unsigned char version : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) BOOL hasFeatureIdentifier;
@property (retain, nonatomic) NSString *featureIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasCompletionDate;
@property (nonatomic) double completionDate;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL hasCountryCodeProvenance;
@property (nonatomic) long long countryCodeProvenance;
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
- (BOOL)isValidWithError:(id *)a0;
- (id)decodedCompletionDate;
- (id)decodedModificationDate;
- (id)decodedUUID;

@end
