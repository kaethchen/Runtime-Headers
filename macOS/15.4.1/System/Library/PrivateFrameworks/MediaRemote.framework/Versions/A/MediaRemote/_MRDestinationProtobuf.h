@class NSString, _MRAVEndpointDescriptorProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRDestinationProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) BOOL hasEndpoint;
@property (retain, nonatomic) _MRAVEndpointDescriptorProtobuf *endpoint;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (readonly, nonatomic) BOOL hasOutputContextUID;
@property (retain, nonatomic) NSString *outputContextUID;

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
