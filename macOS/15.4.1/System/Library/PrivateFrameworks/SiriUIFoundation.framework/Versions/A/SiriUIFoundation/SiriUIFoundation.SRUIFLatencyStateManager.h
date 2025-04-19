@interface SiriUIFoundation.SRUIFLatencyStateManager : NSObject {
    void /* unknown type, empty encoding */ currentTaskIdentifier;
    void /* unknown type, empty encoding */ currentLatencySummary;
    void /* unknown type, empty encoding */ currentLatencyProgress;
    void /* unknown type, empty encoding */ currentLatencySummaryType;
}

- (id)init;
- (void).cxx_destruct;
- (id)getLatestLatencyInformation;
- (void)processLatencyProgressUpdate:(id)a0;
- (void)processTaskReceivedWithIdentifier:(id)a0;

@end
