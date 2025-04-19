@class NSString;

@interface IDSQRProtoAllocBindStaleLink : PBCodable <NSCopying> {
    struct { unsigned char linkId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasServerAddress;
@property (retain, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) BOOL hasClientAddress;
@property (retain, nonatomic) NSString *clientAddress;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int linkId;

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
