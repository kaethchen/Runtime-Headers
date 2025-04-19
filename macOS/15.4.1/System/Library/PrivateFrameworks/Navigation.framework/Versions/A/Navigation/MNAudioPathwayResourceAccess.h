@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MNAudioPathwayResourceAccess : NSObject {
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSDictionary *_hfpRoute;
    unsigned long long _forLoggingOnly_pickableRoutesCount;
}

@property (nonatomic) BOOL enableHFPUse;
@property (nonatomic) BOOL wantsVolumeControl;

- (void).cxx_destruct;
- (id)initWithHFPEnabled:(BOOL)a0;

@end
