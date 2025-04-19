@class NSDate;

@interface HMMDatedLogEvent : HMMLogEvent {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;

- (id)init;
- (void).cxx_destruct;
- (void)markEndTime;

@end
