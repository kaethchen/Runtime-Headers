@interface VUIMetricsLocalRecorder : NSObject {
    void /* unknown type, empty encoding */ storageManager;
    void /* unknown type, empty encoding */ currentSession;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithStorageManager:(id)a0;
- (void)recordPagePerfRenderEventWithVuiDictionary:(id)a0;

@end
