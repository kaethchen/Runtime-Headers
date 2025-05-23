@class NSString;

@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable <NSCopying> {
    struct { unsigned char port : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasHost;
@property (retain, nonatomic) NSString *host;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) unsigned int port;

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
