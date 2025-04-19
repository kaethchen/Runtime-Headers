@interface NSDisplayTiming : NSObject <NSCopying>

@property (class, readonly, copy) NSDisplayTiming *genericDisplayTiming;

@property (readonly) unsigned long long interval;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)displayTimingForScreenNumber:(long long)a0 targetUpdateInterval:(double)a1;
+ (id)displayTimingWithAnchorTime:(unsigned long long)a0 interval:(unsigned long long)a1 submissionDelta:(unsigned long long)a2 wakeUpDelta:(unsigned long long)a3;
+ (id)displayTimingsForActiveScreens;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)presentationTimeAfterTime:(unsigned long long)a0;
- (unsigned long long)presentationTimeForSubmissionDeadline:(unsigned long long)a0;
- (unsigned long long)presentationTimeForWakeUpTime:(unsigned long long)a0;
- (unsigned long long)submissionDeadlineAfterTime:(unsigned long long)a0;
- (unsigned long long)submissionDeadlineForPresentationTime:(unsigned long long)a0;
- (unsigned long long)submissionDeadlineForWakeUpTime:(unsigned long long)a0;
- (unsigned long long)wakeUpTimeAfterTime:(unsigned long long)a0;

@end
