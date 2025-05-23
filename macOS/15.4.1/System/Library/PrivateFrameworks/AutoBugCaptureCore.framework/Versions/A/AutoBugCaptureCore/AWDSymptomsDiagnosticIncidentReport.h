@class NSString, NSMutableArray;

@interface AWDSymptomsDiagnosticIncidentReport : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _timestampsIncidentEvents;
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char version : 1; unsigned char dampeningType : 1; unsigned char handledResult : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasHandledResult;
@property (nonatomic) int handledResult;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasSubtype;
@property (retain, nonatomic) NSString *subtype;
@property (readonly, nonatomic) BOOL hasSubtypeContext;
@property (retain, nonatomic) NSString *subtypeContext;
@property (readonly, nonatomic) BOOL hasDetectedName;
@property (retain, nonatomic) NSString *detectedName;
@property (readonly, nonatomic) BOOL hasEffectiveName;
@property (retain, nonatomic) NSString *effectiveName;
@property (retain, nonatomic) NSMutableArray *relatedNames;
@property (readonly, nonatomic) unsigned long long timestampsIncidentEventsCount;
@property (readonly, nonatomic) unsigned long long *timestampsIncidentEvents;
@property (retain, nonatomic) NSMutableArray *incidentEvents;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL hasDampeningType;
@property (nonatomic) int dampeningType;

+ (Class)incidentEventsType;
+ (Class)relatedNamesType;

- (void)dealloc;
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
- (int)StringAsHandledResult:(id)a0;
- (int)StringAsDampeningType:(id)a0;
- (void)addIncidentEvents:(id)a0;
- (void)addRelatedNames:(id)a0;
- (void)addTimestampsIncidentEvents:(unsigned long long)a0;
- (void)clearIncidentEvents;
- (void)clearRelatedNames;
- (void)clearTimestampsIncidentEvents;
- (id)dampeningTypeAsString:(int)a0;
- (id)handledResultAsString:(int)a0;
- (id)incidentEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)incidentEventsCount;
- (id)relatedNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)relatedNamesCount;
- (void)setTimestampsIncidentEvents:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)timestampsIncidentEventsAtIndex:(unsigned long long)a0;

@end
