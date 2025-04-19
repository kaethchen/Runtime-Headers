@protocol NSPersistentUIStorageClient;

@interface NSPersistentUIRestorationCrashDataHandler : NSObject {
    id<NSPersistentUIStorageClient> _store;
    _Atomic int _crashBlameCounter;
    struct { int restorationCount; long long restorationStartTime; long long restorationEndTime; } _cachedCrashData;
    BOOL _cachedCrashDataIsValid;
}

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)clearCrashCountFileIfNecessary;
- (long long)crashBlameCounter;
- (void)inspectCrashDataWithModification:(BOOL)a0 handler:(id /* block */)a1;
- (unsigned int)modifyCrashBlameCounterBy:(int)a0;

@end
