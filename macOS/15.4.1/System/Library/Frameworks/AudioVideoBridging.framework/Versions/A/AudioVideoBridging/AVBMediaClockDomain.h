@class NSString, NSMutableSet, AVBMediaClockSource;

@interface AVBMediaClockDomain : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sourcesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sinkLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clockInfoLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeSourceLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changeActiveLock;
    NSMutableSet *_sources;
    NSMutableSet *_sinks;
    AVBMediaClockSource *_activeSource;
    unsigned long long _seed;
}

@property (copy, nonatomic) NSString *uid;

- (id)init;
- (void).cxx_destruct;
- (void)addMediaClockSink:(id)a0;
- (void)addMediaClockSource:(id)a0;
- (void)makeMediaClockSourceActive:(id)a0;
- (void)removeMediaClockSink:(id)a0;
- (BOOL)removeMediaClockSource:(id)a0;
- (void)resetMediaClockSource:(id)a0;
- (void)sampleTime:(unsigned long long)a0 timeSyncTime:(unsigned long long)a1 forMediaClockSource:(id)a2;
- (void)updatedMediaClockSource:(id)a0;

@end
