@interface HMDUserActivityType3Report : HMDUserActivityReport

@property (readonly, nonatomic) unsigned long long state;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)contributorType;
- (id)copyReportWithChangedTimestamp:(id)a0;
- (id)copyReportWithLastUpdateTimestamp:(id)a0 reason:(unsigned long long)a1;
- (id)initFromMessagePayload:(id)a0 withUser:(id)a1;
- (id)initWithUser:(id)a0 state:(unsigned long long)a1 withReason:(unsigned long long)a2;
- (id)initWithUser:(id)a0 state:(unsigned long long)a1 withReason:(unsigned long long)a2 changedTimestamp:(id)a3 lastUpdateTimestamp:(id)a4;
- (id)serializedRemoteMessagePayload;

@end
