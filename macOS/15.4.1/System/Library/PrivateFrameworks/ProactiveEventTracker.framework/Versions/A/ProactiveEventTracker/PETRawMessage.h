@class NSData, NSString;

@interface PETRawMessage : PBCodable <NSCopying> {
    struct { unsigned char typeId : 1; } _has;
}

@property (nonatomic) BOOL hasTypeId;
@property (nonatomic) unsigned int typeId;
@property (readonly, nonatomic) BOOL hasRawBytes;
@property (retain, nonatomic) NSData *rawBytes;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;

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
