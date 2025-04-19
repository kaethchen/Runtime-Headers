@class NSProgress;

@interface HDCloudSyncObserverTaskServerStoredProgress : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ invalidationBlock;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithProgress:(id)a0;

@end
