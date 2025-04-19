@class NSSet, NSMutableDictionary, NSDate;

@interface RepeatedConnFailureDetector : NSObject {
    NSSet *_whitelistedDaemons;
    NSMutableDictionary *_flowRecords;
    NSMutableDictionary *_reportDampeners;
    NSDate *_lastFlush;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_flush;
- (void)_excessiveConnFailuresDetectedOn:(id)a0 owner:(id)a1;
- (void)noteSuspectFlow:(id)a0 withOwner:(id)a1;

@end
