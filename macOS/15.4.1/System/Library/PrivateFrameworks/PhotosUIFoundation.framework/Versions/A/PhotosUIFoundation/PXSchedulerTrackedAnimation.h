@class NSString, PXScheduler;

@interface PXSchedulerTrackedAnimation : NSObject {
    PXScheduler *_scheduler;
}

@property (readonly, nonatomic) NSString *label;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithScheduler:(id)a0 label:(id)a1;

@end
