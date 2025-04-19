@class NSData;

@interface IDSQRProtoMaterialInfo : PBCodable <NSCopying> {
    struct { unsigned char shortMaterialIdLength : 1; } _has;
}

@property (retain, nonatomic) NSData *materialId;
@property (nonatomic) int materialType;
@property (retain, nonatomic) NSData *materialContent;
@property (nonatomic) BOOL hasShortMaterialIdLength;
@property (nonatomic) unsigned int shortMaterialIdLength;

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
- (int)StringAsMaterialType:(id)a0;
- (id)materialTypeAsString:(int)a0;

@end
