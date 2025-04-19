@class NSError;

@interface HMMLogEvent : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) double currentTime;

@property (readonly, nonatomic, getter=isSubmitted) BOOL submitted;
@property (retain) NSError *error;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long durationMilliseconds;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (id)initWithStartTime:(double)a0;
- (void)markEndTime;
- (void)prepareForObservation;
- (BOOL)confirmSubmission;

@end
