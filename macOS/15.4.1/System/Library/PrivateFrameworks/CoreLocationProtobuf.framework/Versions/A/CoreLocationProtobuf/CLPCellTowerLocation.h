@class NSString, CLPLocation, NSMutableArray, CLPCellNeighborsGroup;

@interface CLPCellTowerLocation : PBCodable <NSCopying> {
    struct { unsigned char arfcn : 1; unsigned char ecn0 : 1; unsigned char psc : 1; unsigned char rat : 1; unsigned char rscp : 1; unsigned char serverHash : 1; unsigned char transmit : 1; unsigned char hasWifiFallback : 1; unsigned char isLimitedService : 1; unsigned char uniqueCount : 1; } _has;
}

@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic) int lac;
@property (nonatomic) int ci;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasArfcn;
@property (nonatomic) int arfcn;
@property (nonatomic) BOOL hasPsc;
@property (nonatomic) int psc;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasServerHash;
@property (nonatomic) int serverHash;
@property (nonatomic) BOOL hasTransmit;
@property (nonatomic) int transmit;
@property (readonly, nonatomic) BOOL hasOperatorName;
@property (retain, nonatomic) NSString *operatorName;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) int rscp;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (retain, nonatomic) NSMutableArray *neighbors;
@property (readonly, nonatomic) BOOL hasNeighborGroup;
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic) BOOL hasIsLimitedService;
@property (nonatomic) BOOL isLimitedService;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (retain, nonatomic) NSString *serviceProviderName;
@property (nonatomic) BOOL hasUniqueCount;
@property (nonatomic) BOOL uniqueCount;
@property (nonatomic) BOOL hasHasWifiFallback;
@property (nonatomic) BOOL hasWifiFallback;

+ (Class)neighborType;

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
- (void)addNeighbor:(id)a0;
- (id)neighborAtIndex:(unsigned long long)a0;
- (void)clearNeighbors;
- (unsigned long long)neighborsCount;

@end
