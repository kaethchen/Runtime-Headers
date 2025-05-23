@class NSMutableArray;

@interface VGChargingNetworksStorage : PBCodable <NSCopying> {
    struct { unsigned char usesPreferredNetworksForRouting : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *networks;
@property (nonatomic) BOOL hasUsesPreferredNetworksForRouting;
@property (nonatomic) BOOL usesPreferredNetworksForRouting;

+ (Class)networksType;

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
- (void)addNetworks:(id)a0;
- (void)clearNetworks;
- (id)networksAtIndex:(unsigned long long)a0;
- (unsigned long long)networksCount;

@end
