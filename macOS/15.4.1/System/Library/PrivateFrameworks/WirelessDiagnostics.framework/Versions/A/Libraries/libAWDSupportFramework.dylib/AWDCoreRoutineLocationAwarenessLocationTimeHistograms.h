@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessLocationTimeHistograms : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL hasLessThan10mHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan10mHistogram;
@property (readonly, nonatomic) BOOL hasLessThan20mHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan20mHistogram;
@property (readonly, nonatomic) BOOL hasLessThan55mHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan55mHistogram;
@property (readonly, nonatomic) BOOL hasLessThan200mHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *lessThan200mHistogram;
@property (readonly, nonatomic) BOOL hasAnyPositiveHistogram;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *anyPositiveHistogram;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
