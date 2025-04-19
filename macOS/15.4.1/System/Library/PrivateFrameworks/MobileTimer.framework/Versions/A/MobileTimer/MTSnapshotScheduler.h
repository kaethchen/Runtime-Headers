@class NSString;

@interface MTSnapshotScheduler : NSObject {
    NSString *_bundleID;
}

+ (double)_quiescingWindow;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0;
- (void)_performScheduleSnapshot;
- (void)scheduleSnapshot;

@end
