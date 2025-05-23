@interface GEORPClientCapabilities : PBCodable <NSCopying> {
    int _transitMarketSupport;
    BOOL _hasConstrainedProblemStatusSize;
    BOOL _hasFeatureHandle;
    BOOL _hasNoOptInRequest;
    BOOL _hasSupportForIdsBasedNotifications;
    struct { unsigned char has_transitMarketSupport : 1; unsigned char has_hasConstrainedProblemStatusSize : 1; unsigned char has_hasFeatureHandle : 1; unsigned char has_hasNoOptInRequest : 1; unsigned char has_hasSupportForIdsBasedNotifications : 1; } _flags;
}

@property (nonatomic) BOOL hasHasConstrainedProblemStatusSize;
@property (nonatomic) BOOL hasConstrainedProblemStatusSize;
@property (nonatomic) BOOL hasHasNoOptInRequest;
@property (nonatomic) BOOL hasNoOptInRequest;
@property (nonatomic) BOOL hasHasFeatureHandle;
@property (nonatomic) BOOL hasFeatureHandle;
@property (nonatomic) BOOL hasHasSupportForIdsBasedNotifications;
@property (nonatomic) BOOL hasSupportForIdsBasedNotifications;
@property (nonatomic) BOOL hasTransitMarketSupport;
@property (nonatomic) int transitMarketSupport;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTransitMarketSupport:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)transitMarketSupportAsString:(int)a0;

@end
