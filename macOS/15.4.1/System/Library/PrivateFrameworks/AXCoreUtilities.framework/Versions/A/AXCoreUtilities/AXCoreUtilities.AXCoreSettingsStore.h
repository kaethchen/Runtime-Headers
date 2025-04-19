@interface AXCoreUtilities.AXCoreSettingsStore : NSObject {
    void /* unknown type, empty encoding */ cachedSuites;
    void /* unknown type, empty encoding */ suiteLock;
    void /* unknown type, empty encoding */ observationLock;
    void /* unknown type, empty encoding */ observations;
}

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
