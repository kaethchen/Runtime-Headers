@class NSProgress;

@interface TVISProgressTracking : NSObject

@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isExecuting;
@property (readonly, nonatomic) BOOL isCancelled;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithChildExecutionUnits:(long long)a0;

@end
