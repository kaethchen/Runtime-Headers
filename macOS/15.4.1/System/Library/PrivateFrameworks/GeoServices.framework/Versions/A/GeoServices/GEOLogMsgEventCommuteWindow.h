@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventCommuteWindow : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_predictedDestinations;
    double _startTime;
    unsigned int _duration;
    int _endReason;
    unsigned int _numberOfAlertingResponses;
    unsigned int _numberOfDoomRoutingRequests;
    unsigned int _predictedExitTime;
    struct { unsigned char has_startTime : 1; unsigned char has_duration : 1; unsigned char has_endReason : 1; unsigned char has_numberOfAlertingResponses : 1; unsigned char has_numberOfDoomRoutingRequests : 1; unsigned char has_predictedExitTime : 1; } _flags;
}

@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasPredictedExitTime;
@property (nonatomic) unsigned int predictedExitTime;
@property (nonatomic) BOOL hasEndReason;
@property (nonatomic) int endReason;
@property (retain, nonatomic) NSMutableArray *predictedDestinations;
@property (nonatomic) BOOL hasNumberOfDoomRoutingRequests;
@property (nonatomic) unsigned int numberOfDoomRoutingRequests;
@property (nonatomic) BOOL hasNumberOfAlertingResponses;
@property (nonatomic) unsigned int numberOfAlertingResponses;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)predictedDestinationType;

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
- (int)StringAsEndReason:(id)a0;
- (void)addPredictedDestination:(id)a0;
- (void)clearPredictedDestinations;
- (void)clearUnknownFields:(BOOL)a0;
- (id)endReasonAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)predictedDestinationAtIndex:(unsigned long long)a0;
- (unsigned long long)predictedDestinationsCount;
- (void)readAll:(BOOL)a0;

@end
