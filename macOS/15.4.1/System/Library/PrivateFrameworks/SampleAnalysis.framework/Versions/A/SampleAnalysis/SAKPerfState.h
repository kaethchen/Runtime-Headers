@class SATimestamp, NSMutableSet, NSMutableArray;

@interface SAKPerfState : NSObject {
    NSMutableSet *_onCoreThreads;
    SATimestamp *_timestampBeforeAnyTimeAdjustments;
    NSMutableArray *_timestampAfterTimeAdjustments;
    BOOL _petTimerMostRecentSampleWasDeadReckoned;
    int _petTimerID;
    struct ktrace_session { } *_session;
    unsigned long long _petTimerPeriodMachAbs;
    unsigned long long _petTimerNextExpectedSampleMachAbs;
    unsigned long long _latestMachAbsTimeParsed;
    SATimestamp *_mostRecentSampleTimestamp;
}

- (void).cxx_destruct;

@end
