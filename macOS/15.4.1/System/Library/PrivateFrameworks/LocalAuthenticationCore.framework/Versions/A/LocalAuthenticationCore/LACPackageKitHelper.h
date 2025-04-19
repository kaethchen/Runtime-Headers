@class NSDate;

@interface LACPackageKitHelper : NSObject {
    NSDate *_lastSystemUpdate;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_determineLastSystemUpdateWithHistoryItem:(id)a0;
- (double)timeIntervalSinceLastSystemUpdate;

@end
