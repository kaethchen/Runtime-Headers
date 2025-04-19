@class SATimestamp, SATask;

@interface SAHIDStepSample : NSObject {
    SATask *_task;
    unsigned long long _threadId;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    unsigned long long _startSampleIndex;
    unsigned long long _endSampleIndex;
}

- (id)debugDescription;
- (void).cxx_destruct;

@end
