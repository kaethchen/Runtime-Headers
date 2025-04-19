@class CKDPRecordZoneIdentifier;

@interface CKDPZoneZoneReference : PBCodable <NSCopying> {
    struct { unsigned char referenceType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) BOOL hasReferenceType;
@property (nonatomic) int referenceType;

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
- (int)StringAsReferenceType:(id)a0;
- (id)referenceTypeAsString:(int)a0;

@end
