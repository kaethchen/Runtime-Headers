@class NSObject;
@protocol OS_dispatch_group;

@interface fp_task_tracker : NSObject {
    char *label;
    NSObject<OS_dispatch_group> *group;
    _Atomic BOOL cancelled;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
