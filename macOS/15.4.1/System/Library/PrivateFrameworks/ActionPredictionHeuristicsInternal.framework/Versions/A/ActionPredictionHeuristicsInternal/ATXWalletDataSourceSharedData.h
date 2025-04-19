@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_passesDidChange;
- (BOOL)hasEmptyWalletPasses;
- (void)setHasEmptyWalletPasses:(BOOL)a0;

@end
