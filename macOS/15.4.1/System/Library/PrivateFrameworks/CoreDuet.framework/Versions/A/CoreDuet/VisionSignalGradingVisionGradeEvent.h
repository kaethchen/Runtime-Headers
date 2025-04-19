@class NSMutableArray;

@interface VisionSignalGradingVisionGradeEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *visionGrades;
@property (retain, nonatomic) NSMutableArray *popularityEntries;

+ (Class)popularityEntriesType;
+ (Class)visionGradesType;

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
- (void)addPopularityEntries:(id)a0;
- (void)addVisionGrades:(id)a0;
- (void)clearPopularityEntries;
- (void)clearVisionGrades;
- (id)popularityEntriesAtIndex:(unsigned long long)a0;
- (unsigned long long)popularityEntriesCount;
- (id)visionGradesAtIndex:(unsigned long long)a0;
- (unsigned long long)visionGradesCount;

@end
