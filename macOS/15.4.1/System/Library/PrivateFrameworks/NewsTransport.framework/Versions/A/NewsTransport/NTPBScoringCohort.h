@class NSString;

@interface NTPBScoringCohort : PBCodable <NSCopying> {
    struct { unsigned char clicks : 1; unsigned char impressions : 1; unsigned char rawClicks : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasClicks;
@property (nonatomic) double clicks;
@property (nonatomic) BOOL hasRawClicks;
@property (nonatomic) double rawClicks;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) double impressions;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
