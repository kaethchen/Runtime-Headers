@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessHeartbeatStatistics : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL hasHeartbeatTimerFiringCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *heartbeatTimerFiringCount;
@property (readonly, nonatomic) BOOL hasHeartbeatActiveRequestCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *heartbeatActiveRequestCount;
@property (readonly, nonatomic) BOOL hasHeartbeatValidLocationCount;
@property (retain, nonatomic) AWDCoreRoutineLocationAwarenessBasicHistogram *heartbeatValidLocationCount;

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
