@class NSData, CKCodeProto2Any;

@interface CKCodeProto2ProtectedEnvelope : PBCodable <NSCopying> {
    struct { unsigned char contents : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncrypted;
@property (retain, nonatomic) NSData *encrypted;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) CKCodeProto2Any *value;
@property (nonatomic) BOOL hasContents;
@property (nonatomic) int contents;

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
- (int)StringAsContents:(id)a0;
- (void)clearOneofValuesForContents;
- (id)contentsAsString:(int)a0;

@end
