@class PBUnknownFields;

@interface GEOLogMsgEventDisplayAnalytic : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _meanImageSpacing;
    int _displayActionTrigger;
    int _displayEvent;
    unsigned int _movementDistance;
    unsigned int _renderedImageCount;
    unsigned int _requestedImageCount;
    unsigned int _requiredResourcesAvailable;
    unsigned int _totalTime;
    struct { unsigned char has_meanImageSpacing : 1; unsigned char has_displayActionTrigger : 1; unsigned char has_displayEvent : 1; unsigned char has_movementDistance : 1; unsigned char has_renderedImageCount : 1; unsigned char has_requestedImageCount : 1; unsigned char has_requiredResourcesAvailable : 1; unsigned char has_totalTime : 1; } _flags;
}

@property (nonatomic) BOOL hasDisplayActionTrigger;
@property (nonatomic) int displayActionTrigger;
@property (nonatomic) BOOL hasRequiredResourcesAvailable;
@property (nonatomic) unsigned int requiredResourcesAvailable;
@property (nonatomic) BOOL hasTotalTime;
@property (nonatomic) unsigned int totalTime;
@property (nonatomic) BOOL hasRequestedImageCount;
@property (nonatomic) unsigned int requestedImageCount;
@property (nonatomic) BOOL hasRenderedImageCount;
@property (nonatomic) unsigned int renderedImageCount;
@property (nonatomic) BOOL hasMovementDistance;
@property (nonatomic) unsigned int movementDistance;
@property (nonatomic) BOOL hasMeanImageSpacing;
@property (nonatomic) double meanImageSpacing;
@property (nonatomic) BOOL hasDisplayEvent;
@property (nonatomic) int displayEvent;
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
- (int)StringAsDisplayEvent:(id)a0;
- (int)StringAsDisplayActionTrigger:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)displayActionTriggerAsString:(int)a0;
- (id)displayEventAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
