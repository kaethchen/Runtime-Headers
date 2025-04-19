@class CKDPRecordCryptoFeatureSet, CKDPFieldPermittedCryptoFeatureSet, CKDPFieldCryptoFeatureSet, CKDPRecordZoneIdentifier, CKDPZonePermittedCryptoFeatureSet, CKDPZoneCryptoFeatureSet, CKDPRecordPermittedCryptoFeatureSet, CKDPAdopterFeatureSet;

@interface CKDPZoneCryptoFeatureRequirements : PBCodable <NSCopying> {
    struct { unsigned char minimumSchemaVersion : 1; unsigned char revision : 1; } _has;
}

@property (nonatomic) BOOL hasMinimumSchemaVersion;
@property (nonatomic) int minimumSchemaVersion;
@property (nonatomic) BOOL hasRevision;
@property (nonatomic) int revision;
@property (readonly, nonatomic) BOOL hasRequiredZoneCryptoFeatures;
@property (retain, nonatomic) CKDPZoneCryptoFeatureSet *requiredZoneCryptoFeatures;
@property (readonly, nonatomic) BOOL hasRequiredRecordCryptoFeatures;
@property (retain, nonatomic) CKDPRecordCryptoFeatureSet *requiredRecordCryptoFeatures;
@property (readonly, nonatomic) BOOL hasRequiredFieldCryptoFeatures;
@property (retain, nonatomic) CKDPFieldCryptoFeatureSet *requiredFieldCryptoFeatures;
@property (readonly, nonatomic) BOOL hasPermittedZoneCryptoFeatures;
@property (retain, nonatomic) CKDPZonePermittedCryptoFeatureSet *permittedZoneCryptoFeatures;
@property (readonly, nonatomic) BOOL hasPermittedRecordCryptoFeatures;
@property (retain, nonatomic) CKDPRecordPermittedCryptoFeatureSet *permittedRecordCryptoFeatures;
@property (readonly, nonatomic) BOOL hasPermittedFieldCryptoFeatures;
@property (retain, nonatomic) CKDPFieldPermittedCryptoFeatureSet *permittedFieldCryptoFeatures;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasRequiredAdopterFeatures;
@property (retain, nonatomic) CKDPAdopterFeatureSet *requiredAdopterFeatures;

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
