@class NSString, PLAssetsdClient;

@interface PLClientChangePublisher : NSObject <PLChangePublisher> {
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)addEvent;
- (id)initWithAssetsdClient:(id)a0;
- (void)unpauseLaunchEventNotifications;
- (void)pauseLaunchEventNotifications;
- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 debugEvent:(id)a2 transaction:(id)a3;

@end
