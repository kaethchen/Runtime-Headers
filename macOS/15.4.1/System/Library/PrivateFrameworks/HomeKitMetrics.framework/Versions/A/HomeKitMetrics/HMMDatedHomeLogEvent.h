@class NSDate;

@interface HMMDatedHomeLogEvent : HMMHomeLogEvent {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;
- (void)markEndTime;

@end
