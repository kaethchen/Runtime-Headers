@class NSString;

@interface BMPostSiriEngagementEventSignalDeltaEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasSinceUIEnd;
@property (readonly, nonatomic) double sinceUIEnd;
@property (nonatomic) BOOL hasSinceUIStart;
@property (readonly, nonatomic) double sinceUIStart;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (id)initWithDuration:(double)a0 sinceUIEnd:(double)a1 sinceUIStart:(double)a2;

@end
