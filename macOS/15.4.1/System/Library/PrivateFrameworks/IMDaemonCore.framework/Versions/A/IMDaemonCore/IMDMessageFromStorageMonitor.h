@interface IMDMessageFromStorageMonitor : NSObject {
    void /* unknown type, empty encoding */ messageCount;
    void /* unknown type, empty encoding */ totalElapsedTimeSec;
}

@property (class, nonatomic, readonly) IMDMessageFromStorageMonitor *sharedStorageMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)incomingMessageProcessedWithElapsedTime:(double)a0;
- (void)showTapToRadarOnSlowDelivery;

@end
