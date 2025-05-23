@class NSString;

@interface C2MPPathInfo : PBCodable <NSCopying> {
    struct { unsigned char applicationBytesReceived : 1; unsigned char applicationBytesSent : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInterfaceType;
@property (retain, nonatomic) NSString *interfaceType;
@property (readonly, nonatomic) BOOL hasRadioType;
@property (retain, nonatomic) NSString *radioType;
@property (nonatomic) BOOL hasApplicationBytesSent;
@property (nonatomic) unsigned long long applicationBytesSent;
@property (nonatomic) BOOL hasApplicationBytesReceived;
@property (nonatomic) unsigned long long applicationBytesReceived;

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
