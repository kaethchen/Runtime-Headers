@class NSObject;
@protocol OS_dispatch_queue;

@interface RSOfflineInfoDumper : NSObject {
    NSObject<OS_dispatch_queue> *_save_log_queue;
}

- (id)init;
- (void).cxx_destruct;

@end
