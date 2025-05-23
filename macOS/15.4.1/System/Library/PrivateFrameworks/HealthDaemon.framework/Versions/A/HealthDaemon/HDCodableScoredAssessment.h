@class NSString, HDCodableSample, NSData;

@interface HDCodableScoredAssessment : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char risk : 1; unsigned char score : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) long long score;
@property (readonly, nonatomic) BOOL hasAnswers;
@property (retain, nonatomic) NSData *answers;
@property (nonatomic) BOOL hasRisk;
@property (nonatomic) long long risk;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)applyToObject:(id)a0;

@end
