@interface PodcastsFoundation.ICReachability : _TtCs12_SwiftObject <PFReachability> {
    void /* unknown type, empty encoding */ environmentMonitor;
}

@property (nonatomic, readonly) BOOL isReachable;
@property (nonatomic, readonly) BOOL isReachableViaWifi;
@property (nonatomic, readonly) BOOL isReachableViaCellular;
@property (nonatomic, readonly) BOOL isGlobalCellularEnabled;
@property (nonatomic, readonly) BOOL isPodcastsCellularDownloadsEnabled;

@end
