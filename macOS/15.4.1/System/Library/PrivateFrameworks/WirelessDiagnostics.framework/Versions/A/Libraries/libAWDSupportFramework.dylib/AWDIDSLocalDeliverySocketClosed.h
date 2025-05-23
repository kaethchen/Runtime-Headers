@class NSString;

@interface AWDIDSLocalDeliverySocketClosed : PBCodable <NSCopying> {
    struct { unsigned char bytesReceived : 1; unsigned char bytesSent : 1; unsigned char closeError : 1; unsigned char isToDefaultPairedDevice : 1; unsigned char packetsReceived : 1; unsigned char packetsSent : 1; unsigned char priority : 1; unsigned char socketError : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasIsToDefaultPairedDevice;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) BOOL hasCloseError;
@property (nonatomic) unsigned long long closeError;
@property (nonatomic) BOOL hasSocketError;
@property (nonatomic) unsigned long long socketError;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) BOOL hasPacketsSent;
@property (nonatomic) unsigned long long packetsSent;
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) unsigned long long bytesReceived;
@property (nonatomic) BOOL hasPacketsReceived;
@property (nonatomic) unsigned long long packetsReceived;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL hasStreamName;
@property (retain, nonatomic) NSString *streamName;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;

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
