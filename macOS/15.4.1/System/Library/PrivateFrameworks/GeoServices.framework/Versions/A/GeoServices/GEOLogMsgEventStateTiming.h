@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _durationInOldState;
    NSMutableArray *_stateTransitionFeedbacks;
    struct { unsigned char has_durationInOldState : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *stateTransitionFeedbacks;
@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic) double durationInOldState;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)stateTransitionFeedbackType;

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
- (id)stateTransitionFeedbackAtIndex:(unsigned long long)a0;
- (void)addStateTransitionFeedback:(id)a0;
- (void)clearStateTransitionFeedbacks;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (unsigned long long)stateTransitionFeedbacksCount;

@end
