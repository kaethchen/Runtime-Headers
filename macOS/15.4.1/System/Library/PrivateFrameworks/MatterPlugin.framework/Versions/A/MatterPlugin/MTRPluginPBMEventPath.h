@class MTRPluginPBMClusterPath, MTREventPath;

@interface MTRPluginPBMEventPath : PBCodable <NSCopying> {
    struct { unsigned char eventID : 1; } _has;
}

@property (retain, nonatomic) MTREventPath *eventPath;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasClusterPath;
@property (retain, nonatomic) MTRPluginPBMClusterPath *clusterPath;
@property (nonatomic) BOOL hasEventID;
@property (nonatomic) unsigned int eventID;

+ (id)eventPathWithEndpointID:(id)a0 clusterID:(id)a1 eventID:(id)a2;

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
- (id)initWithEventPath:(id)a0;

@end
