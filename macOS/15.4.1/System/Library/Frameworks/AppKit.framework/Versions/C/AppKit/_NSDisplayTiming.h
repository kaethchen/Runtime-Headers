@interface _NSDisplayTiming : NSDisplayTiming {
    unsigned long long _offset;
    unsigned long long _interval;
    unsigned long long _submissionDelta;
    unsigned long long _wakeUpDelta;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)interval;
- (id)initWithAnchorTime:(unsigned long long)a0 interval:(unsigned long long)a1 submissionDelta:(unsigned long long)a2 wakeUpDelta:(unsigned long long)a3;
- (unsigned long long)presentationTimeAfterTime:(unsigned long long)a0;
- (unsigned long long)presentationTimeForSubmissionDeadline:(unsigned long long)a0;
- (unsigned long long)presentationTimeForWakeUpTime:(unsigned long long)a0;
- (unsigned long long)submissionDeadlineAfterTime:(unsigned long long)a0;
- (unsigned long long)submissionDeadlineForPresentationTime:(unsigned long long)a0;
- (unsigned long long)submissionDeadlineForWakeUpTime:(unsigned long long)a0;
- (unsigned long long)wakeUpTimeAfterTime:(unsigned long long)a0;

@end
