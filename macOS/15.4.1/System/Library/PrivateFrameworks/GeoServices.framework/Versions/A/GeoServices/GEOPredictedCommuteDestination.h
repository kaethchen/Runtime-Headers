@class PBUnknownFields;

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _confidenceScore;
    int _destinationType;
    BOOL _chosen;
    struct { unsigned char has_confidenceScore : 1; unsigned char has_destinationType : 1; unsigned char has_chosen : 1; } _flags;
}

@property (nonatomic) BOOL hasDestinationType;
@property (nonatomic) int destinationType;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) double confidenceScore;
@property (nonatomic) BOOL hasChosen;
@property (nonatomic) BOOL chosen;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDestinationType:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)destinationTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
