@class NSString, NSMutableArray, NSSet;

@interface OSAJetsamReport : OSAReport <OSAConcreteReport> {
    NSString *_largestProcess;
    NSString *_largestActiveApp;
    NSMutableArray *_killedActiveApps;
    unsigned long long _wiredBytes;
    unsigned int _killed_or_suspended_count;
    BOOL _isSuspendedOnlyJetsam;
    struct jetsam_snapshot { unsigned long long x0; unsigned long long x1; unsigned long long x2; struct memorystatus_kernel_stats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; char x16[80]; } x3; unsigned long long x4; struct jetsam_snapshot_entry { int x0; char x1[33]; int x2; unsigned int x3; unsigned int x4; int x5; unsigned char x6[16]; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; struct timeval64 { long long x0; long long x1; } x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned int x30; unsigned long long x31; } x5[0]; } *_snapshot;
    NSString *_event_reason;
    unsigned long long _event_code;
    BOOL _aleFlag;
    NSSet *_visibilityEndowmentState;
    NSSet *_audioAssertionState;
    NSMutableArray *_zones;
    NSMutableArray *_tags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_daysSince1970;
+ (struct jetsam_snapshot { unsigned long long x0; unsigned long long x1; unsigned long long x2; struct memorystatus_kernel_stats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; char x16[80]; } x3; unsigned long long x4; struct jetsam_snapshot_entry { int x0; char x1[33]; int x2; unsigned int x3; unsigned int x4; int x5; unsigned char x6[16]; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; struct timeval64 { long long x0; long long x1; } x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned int x30; unsigned long long x31; } x5[0]; } *)fetchSnapshotWithFlags:(unsigned int)a0 error:(id *)a1;
+ (int)instrumentEventsWithAudioAssertionState:(id)a0 visibliltyEndowmentState:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)problemType;
- (BOOL)isActionable;
- (BOOL)saveWithOptions:(id)a0;
- (void)_getSnapshotWithFlags:(unsigned int)a0;
- (void)_setDumpedSuspendedJetsamLog;
- (void)acquireJetsamData;
- (void)acquireJetsamDataWithFlags:(unsigned int)a0;
- (id)additionalIPSMetadata;
- (BOOL)alreadyDumpedSuspendedJetsamLogToday;
- (id)appleCareDetails;
- (void)fetchWiredMemoryInfo;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (unsigned long long)getEventPriority:(id)a0 terminationReason:(unsigned long long)a1 priority:(long long)a2;
- (id)initWithIncidentID:(id)a0 visibilityEndowmentState:(id)a1 audioAssertionState:(id)a2;
- (void)instrumentEvents:(BOOL)a0;
- (id)reportNamePrefix;
- (void)updateLogLimitFor:(unsigned long long)a0;

@end
