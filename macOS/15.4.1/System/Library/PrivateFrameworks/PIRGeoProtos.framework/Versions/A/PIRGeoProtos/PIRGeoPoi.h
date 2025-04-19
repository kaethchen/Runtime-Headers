@class NSString, PIRStructuredAddress, PIRPoint;

@interface PIRGeoPoi : PBCodable <NSCopying> {
    struct { unsigned char popularityCartoScore : 1; unsigned char zioId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasApolloId;
@property (retain, nonatomic) NSString *apolloId;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasPrefGeocode;
@property (retain, nonatomic) PIRPoint *prefGeocode;
@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) PIRStructuredAddress *address;
@property (nonatomic) BOOL hasZioId;
@property (nonatomic) unsigned long long zioId;
@property (nonatomic) BOOL hasPopularityCartoScore;
@property (nonatomic) double popularityCartoScore;
@property (readonly, nonatomic) BOOL hasModernPrimaryCategoryId;
@property (retain, nonatomic) NSString *modernPrimaryCategoryId;

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
