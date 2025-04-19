@class NSString, NSData;

@interface NWPBSendData : PBCodable <NSCopying> {
    NSString *_clientUUID;
    NSData *_messageData;
    unsigned int _receiveWindow;
    struct { unsigned char receiveWindow : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
