@class NSMutableArray;

@interface HMMediaGroupProtoMediaDestinationAggregateData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *destinations;
@property (retain, nonatomic) NSMutableArray *destinationControllerDatas;
@property (retain, nonatomic) NSMutableArray *groups;

+ (Class)destinationType;
+ (Class)groupType;
+ (Class)destinationControllerDataType;

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
- (void)addDestination:(id)a0;
- (void)clearDestinations;
- (void)clearGroups;
- (id)destinationAtIndex:(unsigned long long)a0;
- (unsigned long long)destinationsCount;
- (unsigned long long)groupsCount;
- (void)addGroup:(id)a0;
- (id)groupAtIndex:(unsigned long long)a0;
- (void)clearDestinationControllerDatas;
- (unsigned long long)destinationControllerDatasCount;
- (void)addDestinationControllerData:(id)a0;
- (id)destinationControllerDataAtIndex:(unsigned long long)a0;

@end
