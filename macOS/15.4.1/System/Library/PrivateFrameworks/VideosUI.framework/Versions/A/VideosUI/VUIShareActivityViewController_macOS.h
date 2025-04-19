@class NSString;

@interface VUIShareActivityViewController_macOS : NSObject <NSSharingServicePickerDelegate, NSSharingServiceDelegate>

@property (retain, nonatomic) NSString *itemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_resizeImage:(id)a0 toNewSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (void)shareMediaItem:(id)a0 title:(id)a1 subtitle:(id)a2 imageURLStr:(id)a3 groupActivityMetadata:(id)a4 sharedWatchId:(id)a5 sharedWatchUrl:(id)a6 alwaysShowSharePlay:(BOOL)a7 sourceView:(id)a8 relativePosition:(struct CGPoint { double x0; double x1; })a9 completion:(id /* block */)a10;
- (void)shareMediaItem:(id)a0 title:(id)a1 subtitle:(id)a2 imageURLStr:(id)a3 sharedWatchId:(id)a4 sharedWatchUrl:(id)a5 alwaysShowSharePlay:(BOOL)a6 sourceView:(id)a7 relativePosition:(struct CGPoint { double x0; double x1; })a8 completion:(id /* block */)a9;
- (void)shareMediaWithShareSheet:(id)a0 relativePosition:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
