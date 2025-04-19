@class NSString, STMRemoteExtensionContext, NSObject;
@protocol OS_dispatch_queue;

@interface STMCallbackManager : NSObject {
    STMRemoteExtensionContext *_context;
}

@property (retain) STMRemoteExtensionContext *context;
@property (copy) NSString *bundleIdentifier;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)hostProxy;
- (void)notifyResourcesDidChange:(id)a0;
- (void)notifyTipsDidChange:(id)a0;
- (void)notifyTotalSpaceUsedDidChange:(long long)a0;
- (void)sendPartialResourceItems:(id)a0;

@end
