@class PXCMMInvitationsDataSourceManager, NSString, PHPhotoLibrary, PXCMMCapabilitiesProvider, PXLibraryFilterState;

@interface PXCMMSidebarEnablementObserver : NSObject <PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    PHPhotoLibrary *_photoLibrary;
    PXCMMCapabilitiesProvider *_capabilitiesProvider;
    PXLibraryFilterState *_libraryFilterState;
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
}

@property (nonatomic) BOOL showSidebarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_configureDataSourceManager;
- (void)_configureSharedLibraryStatusProvider;
- (void)_updateShouldShowSidebarItem;

@end
