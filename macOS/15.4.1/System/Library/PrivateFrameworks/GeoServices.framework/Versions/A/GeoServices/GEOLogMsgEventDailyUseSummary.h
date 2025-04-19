@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_aggregationSummaryDate;
    double _firstEventDate;
    unsigned long long _firstEventTimeRoundedToHour;
    NSString *_summaryDate;
    NSMutableArray *_useEvents;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _summaryPeriod;
    struct { unsigned char has_firstEventDate : 1; unsigned char has_firstEventTimeRoundedToHour : 1; unsigned char has_summaryPeriod : 1; unsigned char read_unknownFields : 1; unsigned char read_aggregationSummaryDate : 1; unsigned char read_summaryDate : 1; unsigned char read_useEvents : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *useEvents;
@property (nonatomic) BOOL hasFirstEventDate;
@property (nonatomic) double firstEventDate;
@property (nonatomic) BOOL hasFirstEventTimeRoundedToHour;
@property (nonatomic) unsigned long long firstEventTimeRoundedToHour;
@property (nonatomic) BOOL hasSummaryPeriod;
@property (nonatomic) int summaryPeriod;
@property (readonly, nonatomic) BOOL hasSummaryDate;
@property (retain, nonatomic) NSString *summaryDate;
@property (readonly, nonatomic) BOOL hasAggregationSummaryDate;
@property (retain, nonatomic) NSString *aggregationSummaryDate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)useEventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSummaryPeriod:(id)a0;
- (void)addUseEvents:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearUseEvents;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)summaryPeriodAsString:(int)a0;
- (id)useEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)useEventsCount;

@end
