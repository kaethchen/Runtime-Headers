@interface AWDLBEndpointsFetchReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionCellularFallbackCount : 1; unsigned char endpointsFetchTaskBadReplyCount : 1; unsigned char endpointsFetchTaskCount : 1; unsigned char endpointsFetchTaskFailureCount : 1; unsigned char endpointsFetchTaskSuccessCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEndpointsFetchTaskCount;
@property (nonatomic) int endpointsFetchTaskCount;
@property (nonatomic) BOOL hasEndpointsFetchTaskSuccessCount;
@property (nonatomic) int endpointsFetchTaskSuccessCount;
@property (nonatomic) BOOL hasEndpointsFetchTaskFailureCount;
@property (nonatomic) int endpointsFetchTaskFailureCount;
@property (nonatomic) BOOL hasEndpointsFetchTaskBadReplyCount;
@property (nonatomic) int endpointsFetchTaskBadReplyCount;
@property (nonatomic) BOOL hasConnectionCellularFallbackCount;
@property (nonatomic) int connectionCellularFallbackCount;

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
