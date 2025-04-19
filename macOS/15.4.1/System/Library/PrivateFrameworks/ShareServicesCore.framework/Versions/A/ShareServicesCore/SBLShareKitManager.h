@class NSMenu, NSString, NSDictionary, NSArray, NSSharingServicePicker, NSObject, NSWindow;
@protocol OS_dispatch_queue, SBLShareKitManagerDelegate, SBLShareKitManagerProgressDelegate, SBLShareKitManagerReconnectDelegate;

@interface SBLShareKitManager : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate> {
    NSArray *_objectsToShare;
    id /* block */ _sharedAlbumAction;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMenu *_populatedMenu;
}

@property (retain, nonatomic) NSDictionary *assetsInfo;
@property (nonatomic) BOOL isFullscreen;
@property (retain, nonatomic) NSString *lastServiceSelected;
@property (nonatomic) BOOL needsSharingAlert;
@property (copy, nonatomic) NSString *sharingAlertTitle;
@property (copy, nonatomic) NSString *sharingAlertMessage;
@property (copy, nonatomic) NSString *sharingAlertConfirmTitle;
@property (copy, nonatomic) NSString *sharingAlertCancelTitle;
@property (copy, nonatomic) NSArray *cachedSharedItems;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (weak) id<SBLShareKitManagerProgressDelegate> progressDelegate;
@property (weak) id<SBLShareKitManagerReconnectDelegate> reconnectDelegate;
@property (weak) id<SBLShareKitManagerDelegate> delegate;
@property (retain, nonatomic) NSSharingServicePicker *sessionPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (void)abort;
- (BOOL)populateMenu:(id)a0 forSharableObjects:(id)a1 sharingParams:(id)a2;
- (id)filterServices:(id)a0;
- (void)_populateMenu:(id)a0 forSharingParams:(id)a1 shareableItems:(id)a2;
- (id)assetForItemProvider:(id)a0;
- (void)cleanupItems:(id)a0;
- (BOOL)populateMenu:(id)a0 forSharableObjects:(id)a1 sharingParams:(id)a2 allowedLatency:(double)a3 completion:(id /* block */)a4;
- (void)preflightItemProviders:(id)a0;
- (void)resetForMenu:(id)a0;
- (id)servicePickerForItems:(id)a0;
- (id)sharingItemsForObjects:(id)a0 sharingParams:(id)a1;

@end
