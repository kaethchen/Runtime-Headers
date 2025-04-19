@class NSSharingService, NSString, NSDictionary, NSImage, NSOperationQueue, NSOperation;

@interface FRSharingHelper : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>

@property (readonly, nonatomic) NSSharingService *service;
@property (readonly, nonatomic) NSDictionary *sharingInfo;
@property (retain, nonatomic) NSImage *iconImage;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSOperation *iconOperation;
@property (readonly, nonatomic) id /* block */ serviceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)shareThroughServiceNamed:(id)a0 withSharingInfo:(id)a1 customServiceHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)start;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingService:(id)a0 imageForShareItem:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)_createWebArchiveFromHTML:(id)a0;
- (id)initWithServiceName:(id)a0 sharingInfo:(id)a1;

@end
