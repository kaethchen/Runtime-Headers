@class NSHashTable;

@interface HDDiagnosticManager : NSObject {
    NSHashTable *_objects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedDiagnosticManager;

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)diagnosticsForKeys:(id)a0;
- (void)logAllDiagnostics;
- (id)_diagnosticsForKeys:(id)a0 shouldLog:(BOOL)a1;
- (id)_diagnosticsOverview;

@end
