@class STMediaStatusDomainPublisher, NSObject;
@protocol OS_dispatch_queue;

@interface CMIOExtensionProxyAttribution : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    STMediaStatusDomainPublisher *_stMediaStatusDomainPublisher;
}

+ (id)sharedAttribution;

- (void)dealloc;
- (id)init;
- (void)addCameraAttribution:(id)a0;
- (void)removeCameraAttribution:(id)a0;

@end
