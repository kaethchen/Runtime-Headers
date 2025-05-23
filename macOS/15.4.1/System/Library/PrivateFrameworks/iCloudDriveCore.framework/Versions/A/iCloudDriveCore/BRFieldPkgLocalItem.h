@class NSData, BRFieldPkgItem;

@interface BRFieldPkgLocalItem : PBCodable <NSCopying> {
    struct { unsigned char size : 1; unsigned char generationID : 1; } _has;
}

@property (retain, nonatomic) BRFieldPkgItem *item;
@property (nonatomic) long long fileID;
@property (nonatomic) BOOL hasGenerationID;
@property (nonatomic) unsigned int generationID;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) long long size;
@property (readonly, nonatomic) BOOL hasXattrs;
@property (retain, nonatomic) NSData *xattrs;

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
