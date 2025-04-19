@class NSArray, NSString, PHProject, PHPhotoLibrary, PHProjectTypeDescriptionSourceService;
@protocol PHProjectExtensionController;

@interface PHProjectExtensionContext : NSExtensionContext <NSWindowDelegate, NSDraggingDestination, PUProjectExtensionVendor, PHPhotoLibraryChangeObserver, PHProjectTypeDescriptionSourceServiceDelegate>

@property (class, readonly, copy) NSArray *supportedDraggedTypes;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic, setter=_setProject:) PHProject *project;
@property (weak, nonatomic) id<PHProjectExtensionController> _projectExtensionController;
@property (retain, nonatomic) PHProjectTypeDescriptionSourceService *_typeDescriptionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)setupLibraryLock;

- (void).cxx_destruct;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)_dragTypes;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)updateDraggingItemsForDrag:(id)a0;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)photoLibraryDidChange:(id)a0;
- (void)connectionWasInvalidatedForProjectTypeDescriptionSourceService:(id)a0;
- (void)_setupProjectWithIdentifier:(id)a0 libraryURL:(id)a1;
- (void)beginProjectWithProjectIdentifier:(id)a0 libraryURL:(id)a1 projectInfo:(id)a2 completionHandler:(id /* block */)a3;
- (void)finishProjectWithCompletionHandler:(id /* block */)a0;
- (id)projectHostExtensionContextWithErrorHandler:(id /* block */)a0;
- (void)requestProjectTypeSourceForCategory:(id)a0 reply:(id /* block */)a1;
- (void)requestTCCAccessForPhotos:(id /* block */)a0;
- (void)resumeProjectEditingWithProjectIdentifier:(id)a0 libraryURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)showEditorForAsset:(id)a0;
- (id)updatedProjectInfoFromProjectInfo:(id)a0 completion:(id /* block */)a1;

@end
