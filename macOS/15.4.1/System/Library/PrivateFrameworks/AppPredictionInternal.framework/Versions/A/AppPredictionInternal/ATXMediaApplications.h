@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ATXMediaApplications : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_mediaApps;
}

- (id)init;
- (void).cxx_destruct;
- (void)_updateMediaApps;
- (BOOL)appSupportsMedia:(id)a0;

@end
