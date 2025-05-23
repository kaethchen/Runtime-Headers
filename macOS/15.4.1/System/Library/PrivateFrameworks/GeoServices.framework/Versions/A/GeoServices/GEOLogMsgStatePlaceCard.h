@class PBDataReader, GEOPlaceActionDetails, NSString, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _containedChildrenPois;
    struct { int *list; unsigned long long count; unsigned long long size; } _possibleActions;
    struct { int *list; unsigned long long count; unsigned long long size; } _unactionableUiElements;
    NSMutableArray *_commingledRichProviderIds;
    NSMutableArray *_modules;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_placecardCategory;
    NSMutableArray *_revealedModules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placecardType;
    BOOL _isPersonAddressAvailable;
    BOOL _isPersonLocationShared;
    BOOL _isPersonPlacecard;
    BOOL _transitAdvisoryBanner;
    struct { unsigned char has_placecardType : 1; unsigned char has_isPersonAddressAvailable : 1; unsigned char has_isPersonLocationShared : 1; unsigned char has_isPersonPlacecard : 1; unsigned char has_transitAdvisoryBanner : 1; unsigned char read_unknownFields : 1; unsigned char read_containedChildrenPois : 1; unsigned char read_possibleActions : 1; unsigned char read_unactionableUiElements : 1; unsigned char read_commingledRichProviderIds : 1; unsigned char read_modules : 1; unsigned char read_placeActionDetails : 1; unsigned char read_placecardCategory : 1; unsigned char read_revealedModules : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlaceActionDetails;
@property (retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;
@property (readonly, nonatomic) unsigned long long possibleActionsCount;
@property (readonly, nonatomic) int *possibleActions;
@property (readonly, nonatomic) unsigned long long unactionableUiElementsCount;
@property (readonly, nonatomic) int *unactionableUiElements;
@property (readonly, nonatomic) BOOL hasPlacecardCategory;
@property (retain, nonatomic) NSString *placecardCategory;
@property (nonatomic) BOOL hasPlacecardType;
@property (nonatomic) int placecardType;
@property (nonatomic) BOOL hasTransitAdvisoryBanner;
@property (nonatomic) BOOL transitAdvisoryBanner;
@property (readonly, nonatomic) unsigned long long containedChildrenPoisCount;
@property (readonly, nonatomic) unsigned long long *containedChildrenPois;
@property (retain, nonatomic) NSMutableArray *modules;
@property (retain, nonatomic) NSMutableArray *revealedModules;
@property (retain, nonatomic) NSMutableArray *commingledRichProviderIds;
@property (nonatomic) BOOL hasIsPersonPlacecard;
@property (nonatomic) BOOL isPersonPlacecard;
@property (nonatomic) BOOL hasIsPersonAddressAvailable;
@property (nonatomic) BOOL isPersonAddressAvailable;
@property (nonatomic) BOOL hasIsPersonLocationShared;
@property (nonatomic) BOOL isPersonLocationShared;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)commingledRichProviderIdsType;
+ (BOOL)isValid:(id)a0;
+ (Class)modulesType;
+ (Class)revealedModulesType;

- (void)dealloc;
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
- (int)StringAsUnactionableUiElements:(id)a0;
- (int)StringAsPlacecardType:(id)a0;
- (int)StringAsPossibleActions:(id)a0;
- (id)modulesAtIndex:(unsigned long long)a0;
- (id)unactionableUiElementsAsString:(int)a0;
- (void)setContainedChildrenPois:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)addCommingledRichProviderIds:(id)a0;
- (void)addContainedChildrenPois:(unsigned long long)a0;
- (void)addModules:(id)a0;
- (void)addPossibleAction:(int)a0;
- (void)addRevealedModules:(id)a0;
- (void)addUnactionableUiElement:(int)a0;
- (void)clearCommingledRichProviderIds;
- (void)clearContainedChildrenPois;
- (void)clearModules;
- (void)clearPossibleActions;
- (void)clearRevealedModules;
- (void)clearUnactionableUiElements;
- (void)clearUnknownFields:(BOOL)a0;
- (id)commingledRichProviderIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)commingledRichProviderIdsCount;
- (unsigned long long)containedChildrenPoisAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)modulesCount;
- (id)placecardTypeAsString:(int)a0;
- (int)possibleActionAtIndex:(unsigned long long)a0;
- (id)possibleActionsAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (id)revealedModulesAtIndex:(unsigned long long)a0;
- (unsigned long long)revealedModulesCount;
- (void)setPossibleActions:(int *)a0 count:(unsigned long long)a1;
- (void)setUnactionableUiElements:(int *)a0 count:(unsigned long long)a1;
- (int)unactionableUiElementAtIndex:(unsigned long long)a0;

@end
