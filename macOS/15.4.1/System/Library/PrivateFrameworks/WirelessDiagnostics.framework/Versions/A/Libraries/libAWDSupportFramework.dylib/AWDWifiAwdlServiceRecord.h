@class NSData;

@interface AWDWifiAwdlServiceRecord : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char opcode : 1; unsigned char serviceId : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasOpcode;
@property (nonatomic) unsigned int opcode;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasServiceId;
@property (nonatomic) unsigned int serviceId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL hasServiceKey;
@property (retain, nonatomic) NSData *serviceKey;

- (void)dealloc;
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
