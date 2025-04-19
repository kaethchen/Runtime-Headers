@class HMDUser, NSDate;

@interface HMDUserActivityReport : HMFObject {
    unsigned long long _reason;
    NSDate *_lastUpdateTimestamp;
}

@property (readonly, nonatomic) unsigned long long contributorType;
@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) NSDate *changedTimestamp;
@property (readonly, nonatomic) NSDate *lastUpdateTimestamp;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyReportWithChangedTimestamp:(id)a0;
- (id)changedTimestampFromReason:(unsigned long long)a0 lastUpdateTimestamp:(id)a1;
- (id)copyReportWithLastUpdateTimestamp:(id)a0 reason:(unsigned long long)a1;
- (id)initFromMessagePayload:(id)a0 withUser:(id)a1;
- (id)initWithUser:(id)a0 withReason:(unsigned long long)a1 changedTimestamp:(id)a2 lastUpdateTimestamp:(id)a3;
- (BOOL)isExpiredWithCurrentDate:(id)a0 validInterval:(double)a1;
- (id)serializedRemoteMessagePayload;

@end
