@class NSString, NSCollectionViewDiffableDataSource, PXSharedLibraryRulePeopleDataManager, PHPhotoLibrary, NSLayoutConstraint, NSCollectionView;
@protocol PXSharedLibraryPreferencesPeopleViewControllerDelegate;

@interface PXSharedLibraryPreferencesPeopleViewController : NSViewController <NSMenuItemValidation, PXPeoplePickerCollectionViewItemDelegate, PXPeoplePickerViewControllerDelegate, PXSharedLibraryRulePeopleDataManagerDelegate> {
    NSLayoutConstraint *_boxHeightConstraint;
    NSCollectionView *_collectionView;
    NSCollectionViewDiffableDataSource *_collectionViewDataSource;
    PXSharedLibraryRulePeopleDataManager *_dataManager;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL hasPeople;
@property (readonly, nonatomic) NSString *statusMessage;
@property (weak, nonatomic) id<PXSharedLibraryPreferencesPeopleViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateProperties;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithPhotoLibrary:(id)a0;
- (void)addOtherPeople:(id)a0;
- (void)_handleMissingPhotoLibrary;
- (void)_updateBoxHeightConstraint;
- (void)_updateCollectionViewItem:(id)a0 forRulePerson:(id)a1;
- (void)identifyClickedForViewItem:(id)a0;
- (void)peoplePickerViewController:(id)a0 didFinishPickingPeopleWithUUIDs:(id)a1;
- (void)peoplePickerViewControllerDidCancel:(id)a0;
- (void)preferredScrollerStyleDidChange:(id)a0;
- (void)removeClickedForViewItem:(id)a0;
- (void)sharedLibraryRulePeopleControllerDidChangeCurrentSnapshot:(id)a0;

@end
