@class NSSharingService, NSArray, NSString, CKShare, CKContainer;
@protocol UINSCloudSharingControllerDelegate, UINSWindow;

@interface UINSCloudSharingController : NSObject <UINSCloudSharingController, NSCloudSharingServiceDelegate>

@property (copy, nonatomic) id /* block */ preparationHandler;
@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) NSSharingService *sharingService;
@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) id<UINSCloudSharingControllerDelegate> delegate;
@property (weak, nonatomic) id<UINSWindow> window;
@property (nonatomic) unsigned long long availablePermissions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)present;
- (id)initWithPreparationHandler:(id /* block */)a0;
- (id)initWithShare:(id)a0 container:(id)a1;
- (unsigned long long)optionsForSharingService:(id)a0 shareProvider:(id)a1;
- (void)sharingService:(id)a0 didCompleteForItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didSaveShare:(id)a1;
- (void)sharingService:(id)a0 didStopSharing:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)dismiss:(id /* block */)a0;

@end
