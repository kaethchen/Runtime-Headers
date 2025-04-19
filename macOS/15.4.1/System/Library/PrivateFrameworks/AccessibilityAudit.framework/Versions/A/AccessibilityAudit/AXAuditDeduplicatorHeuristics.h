@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface AXAuditDeduplicatorHeuristics : NSObject

@property (retain) NSMutableArray *hashGroups;
@property double targetThreshold;
@property (retain) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;
- (BOOL)compareIssues:(id)a0 and:(id)a1;
- (id)computeObservationVector:(struct CGImage { } *)a0;
- (id)computeObservations:(struct CGImage { } *)a0;
- (int)deduplicateIssues:(id)a0 forFeatureHashGroup:(id)a1;
- (int)deduplicateIssues:(id)a0 onImage:(struct CGImage { } *)a1 forPlatform:(id)a2;
- (void)setPlatformThreshold:(id)a0;

@end
