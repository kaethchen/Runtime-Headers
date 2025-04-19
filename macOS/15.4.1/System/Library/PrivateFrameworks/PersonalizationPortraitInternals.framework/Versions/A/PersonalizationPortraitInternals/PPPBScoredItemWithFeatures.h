@class NSString, NSMutableArray;

@interface PPPBScoredItemWithFeatures : PBCodable <NSCopying> {
    struct { unsigned char topicId : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) BOOL hasTopicId;
@property (nonatomic) unsigned long long topicId;
@property (readonly, nonatomic) BOOL hasNamedEntity;
@property (retain, nonatomic) NSString *namedEntity;
@property (readonly, nonatomic) BOOL hasNamedEntityWithFeedback;
@property (retain, nonatomic) NSString *namedEntityWithFeedback;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float score;
@property (retain, nonatomic) NSMutableArray *features;
@property (retain, nonatomic) NSMutableArray *feedbackItems;

+ (Class)featuresType;
+ (Class)feedbackItemsType;

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
- (void)addFeatures:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;
- (void)addFeedbackItems:(id)a0;
- (void)clearFeedbackItems;
- (id)feedbackItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackItemsCount;

@end
