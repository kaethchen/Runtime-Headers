@class GEOAdvisoryNotice, PBUnknownFields, PBDataReader, GEOClickableAdvisory, NSMutableArray;

@interface GEOAdvisoriesInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOClickableAdvisory *_clickableAdvisory;
    GEOAdvisoryNotice *_evAdvisory;
    NSMutableArray *_genericAdvisorys;
    NSMutableArray *_incidentAdvisorys;
    NSMutableArray *_noticeAdvisorys;
    GEOAdvisoryNotice *_tollAdvisory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_clickableAdvisory : 1; unsigned char read_evAdvisory : 1; unsigned char read_genericAdvisorys : 1; unsigned char read_incidentAdvisorys : 1; unsigned char read_noticeAdvisorys : 1; unsigned char read_tollAdvisory : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *noticeAdvisorys;
@property (readonly, nonatomic) BOOL hasClickableAdvisory;
@property (retain, nonatomic) GEOClickableAdvisory *clickableAdvisory;
@property (readonly, nonatomic) BOOL hasTollAdvisory;
@property (retain, nonatomic) GEOAdvisoryNotice *tollAdvisory;
@property (readonly, nonatomic) BOOL hasEvAdvisory;
@property (retain, nonatomic) GEOAdvisoryNotice *evAdvisory;
@property (retain, nonatomic) NSMutableArray *incidentAdvisorys;
@property (retain, nonatomic) NSMutableArray *genericAdvisorys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)genericAdvisoryType;
+ (Class)incidentAdvisoryType;
+ (BOOL)isValid:(id)a0;
+ (Class)noticeAdvisoryType;

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
- (void)addGenericAdvisory:(id)a0;
- (void)addIncidentAdvisory:(id)a0;
- (void)addNoticeAdvisory:(id)a0;
- (void)clearGenericAdvisorys;
- (void)clearIncidentAdvisorys;
- (void)clearNoticeAdvisorys;
- (void)clearUnknownFields:(BOOL)a0;
- (id)genericAdvisoryAtIndex:(unsigned long long)a0;
- (unsigned long long)genericAdvisorysCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)incidentAdvisoryAtIndex:(unsigned long long)a0;
- (unsigned long long)incidentAdvisorysCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)noticeAdvisoryAtIndex:(unsigned long long)a0;
- (unsigned long long)noticeAdvisorysCount;
- (void)readAll:(BOOL)a0;

@end
