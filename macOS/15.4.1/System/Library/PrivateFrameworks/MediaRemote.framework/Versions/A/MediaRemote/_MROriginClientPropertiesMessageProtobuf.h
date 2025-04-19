@class NSString;

@interface _MROriginClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char lastPlayingTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasLastPlayingTimestamp;
@property (nonatomic) double lastPlayingTimestamp;
@property (readonly, nonatomic) BOOL hasDevicePlaybackSessionID;
@property (retain, nonatomic) NSString *devicePlaybackSessionID;

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
