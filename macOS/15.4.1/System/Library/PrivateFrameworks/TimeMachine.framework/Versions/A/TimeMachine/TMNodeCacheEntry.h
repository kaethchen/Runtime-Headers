@interface TMNodeCacheEntry : PBCodable <NSCopying> {
    struct { unsigned char destinationFileID : 1; unsigned char sourceFileID : 1; } _has;
}

@property (nonatomic) BOOL hasSourceFileID;
@property (nonatomic) unsigned long long sourceFileID;
@property (nonatomic) BOOL hasDestinationFileID;
@property (nonatomic) unsigned long long destinationFileID;
@property (nonatomic) unsigned int flags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
