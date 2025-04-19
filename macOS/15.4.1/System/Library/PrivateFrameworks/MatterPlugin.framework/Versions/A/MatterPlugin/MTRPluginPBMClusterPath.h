@class MTRClusterPath;

@interface MTRPluginPBMClusterPath : PBCodable <NSCopying> {
    struct { unsigned char clusterID : 1; unsigned char endpointID : 1; } _has;
}

@property (retain, nonatomic) MTRClusterPath *clusterPath;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) BOOL hasEndpointID;
@property (nonatomic) unsigned int endpointID;
@property (nonatomic) BOOL hasClusterID;
@property (nonatomic) unsigned int clusterID;

+ (id)clusterPathWithEndpointID:(id)a0 clusterID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithClusterPath:(id)a0;

@end
