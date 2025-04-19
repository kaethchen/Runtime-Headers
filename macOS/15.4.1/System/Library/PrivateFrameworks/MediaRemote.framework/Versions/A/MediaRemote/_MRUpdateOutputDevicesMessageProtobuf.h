@class NSString, NSMutableArray;

@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) BOOL hasEndpointUID;
@property (retain, nonatomic) NSString *endpointUID;
@property (retain, nonatomic) NSMutableArray *clusterAwareOutputDevices;

+ (Class)clusterAwareOutputDevicesType;
+ (Class)outputDevicesType;

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
- (void)addClusterAwareOutputDevices:(id)a0;
- (void)addOutputDevices:(id)a0;
- (void)clearClusterAwareOutputDevices;
- (void)clearOutputDevices;
- (id)clusterAwareOutputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)clusterAwareOutputDevicesCount;
- (id)outputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDevicesCount;

@end
