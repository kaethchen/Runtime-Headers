@class NSData, NSString, GEOTransitRouteDisplayStrings, GEOTransitEngineDebugData, GEOAdvisoriesInfo, PBDataReader, PBUnknownFields, GEOPBTransitRoutingIncidentMessage, NSMutableArray;

@interface GEOTransitSuggestedRoute : PBCodable <GEOCompanionCompatibility, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _routeBadges;
    GEOAdvisoriesInfo *_advisoriesInfo;
    GEOTransitRouteDisplayStrings *_displayStrings;
    GEOTransitEngineDebugData *_engineDebugData;
    NSData *_routeHandle;
    NSMutableArray *_routePlanningArtworks;
    NSMutableArray *_sectionOptions;
    NSMutableArray *_sections;
    NSMutableArray *_steps;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _rank;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    BOOL _supportsRouteUpdates;
    struct { unsigned char has_absEndTime : 1; unsigned char has_absStartTime : 1; unsigned char has_rank : 1; unsigned char has_travelTimeAggressiveEstimate : 1; unsigned char has_travelTimeConservativeEstimate : 1; unsigned char has_supportsRouteUpdates : 1; unsigned char read_unknownFields : 1; unsigned char read_routeBadges : 1; unsigned char read_advisoriesInfo : 1; unsigned char read_displayStrings : 1; unsigned char read_engineDebugData : 1; unsigned char read_routeHandle : 1; unsigned char read_routePlanningArtworks : 1; unsigned char read_sectionOptions : 1; unsigned char read_sections : 1; unsigned char read_steps : 1; unsigned char read_transitIncidentMessage : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isWalkingOnlyRoute) BOOL walkingOnlyRoute;
@property (nonatomic) BOOL hasAbsStartTime;
@property (nonatomic) unsigned int absStartTime;
@property (nonatomic) BOOL hasAbsEndTime;
@property (nonatomic) unsigned int absEndTime;
@property (retain, nonatomic) NSMutableArray *steps;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (retain, nonatomic) NSData *routeHandle;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) unsigned int rank;
@property (readonly, nonatomic) BOOL hasTransitIncidentMessage;
@property (retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;
@property (readonly, nonatomic) BOOL hasAdvisoriesInfo;
@property (retain, nonatomic) GEOAdvisoriesInfo *advisoriesInfo;
@property (retain, nonatomic) NSMutableArray *routePlanningArtworks;
@property (readonly, nonatomic) BOOL hasDisplayStrings;
@property (retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property (readonly, nonatomic) unsigned long long routeBadgesCount;
@property (readonly, nonatomic) int *routeBadges;
@property (retain, nonatomic) NSMutableArray *sectionOptions;
@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (readonly, nonatomic) BOOL hasEngineDebugData;
@property (retain, nonatomic) GEOTransitEngineDebugData *engineDebugData;
@property (nonatomic) BOOL hasSupportsRouteUpdates;
@property (nonatomic) BOOL supportsRouteUpdates;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)routePlanningArtworkType;
+ (Class)sectionOptionType;
+ (Class)sectionType;
+ (Class)stepsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (id)sectionAtIndex:(unsigned long long)a0;
- (void)addSection:(id)a0;
- (int)StringAsRouteBadges:(id)a0;
- (void)addRouteBadge:(int)a0;
- (void)addRoutePlanningArtwork:(id)a0;
- (void)addSectionOption:(id)a0;
- (void)addSteps:(id)a0;
- (void)clearRouteBadges;
- (void)clearRoutePlanningArtworks;
- (void)clearSectionOptions;
- (void)clearSections;
- (void)clearSteps;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)instanceCompatibleWithProtocolVersion:(unsigned long long)a0;
- (id)jsonRepresentation;
- (id)nextOptionForOption:(id)a0 withRideIndex:(unsigned long long)a1;
- (void)readAll:(BOOL)a0;
- (int)routeBadgeAtIndex:(unsigned long long)a0;
- (id)routeBadgesAsString:(int)a0;
- (id)routePlanningArtworkAtIndex:(unsigned long long)a0;
- (unsigned long long)routePlanningArtworksCount;
- (id)sectionOptionAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionOptionsCount;
- (unsigned long long)sectionsCount;
- (void)setRouteBadges:(int *)a0 count:(unsigned long long)a1;
- (id)stepsAtIndex:(unsigned long long)a0;
- (unsigned long long)stepsCount;

@end
