@class NSArray, KHProjectGroup, KHProjectBundle, NSMutableDictionary, KHProjectSubgroup, KHProjectDatabaseActivity, NSMutableArray, NSMutableOrderedSet, KHProductSubgroup, KHTheme;
@protocol KHPrintsProjectBundleControllerDelegate, KHStoreCartProtocol;

@interface KHPrintsProjectBundleController : NSObject {
    KHProductSubgroup *_provisionalProductSubgroup;
    NSMutableArray *_hydrationOperations;
    KHProjectGroup *_projectGroup;
    NSArray *_projectSubgroups;
    id _observer;
}

@property (readonly, nonatomic) NSMutableOrderedSet *photos;
@property (readonly, nonatomic) NSMutableDictionary *projectSubgroupsByProductSubgroupIdentifier;
@property (readonly, nonatomic) unsigned long long totalNumberOfLayouts;
@property (retain, nonatomic) KHProjectDatabaseActivity *databaseActivity;
@property (retain, nonatomic) KHProjectGroup *projectGroup;
@property (readonly, nonatomic) KHProjectBundle *projectBundle;
@property (readonly, nonatomic) NSArray *projectSubgroups;
@property (readonly, nonatomic) unsigned long long numberOfPrints;
@property (retain, nonatomic) KHTheme *theme;
@property (weak, nonatomic) KHProjectSubgroup *selectedProjectSubgroup;
@property (weak, nonatomic) id<KHPrintsProjectBundleControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *photoInfos;
@property (readonly, nonatomic) NSArray *hydrationOperations;
@property (readonly, nonatomic) id<KHStoreCartProtocol> cart;

+ (BOOL)canOrderPrintsForPhotos:(id)a0 error:(id *)a1;
+ (id)orderQuantitiesForProjectLayouts:(id)a0;
+ (id)photos:(id)a0 mappedToProductsInSubgroup:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addPhotoInfo:(id)a0;
- (void)warmUpCaches;
- (BOOL)hasProjectGroup;
- (void)removeForReuse:(BOOL)a0;
- (id)_addPhotos:(id)a0 toProductSubgroup:(id)a1;
- (void)_addPhotos:(id)a0 toProjectSubgroup:(id)a1 forProductSubgroup:(id)a2;
- (void)_addProjectForProduct:(id)a0 withPhotos:(id)a1 toProjectSubgroup:(id)a2;
- (BOOL)_canAddNumberOfPrints:(unsigned long long)a0 error:(id *)a1;
- (id)_indexPathForProjectSubgroup:(id)a0;
- (void)_notifyChangeOfType:(unsigned long long)a0 forProjectSubgroupAtIndexPath:(id)a1;
- (void)_notifyDidChangeContent;
- (void)_notifyModificationOfProjectSubgroup:(id)a0;
- (void)_notifyOnMainThread:(id /* block */)a0;
- (void)_notifyProjectBundleAdditionOfPhotos:(id)a0;
- (void)_notifyProjectBundleRemovalOfPhotos:(id)a0;
- (void)_notifyProjectBundleResetForReuse:(BOOL)a0;
- (void)_notifyWillChangeContent;
- (id)_photosInProjectSubgroup:(id)a0;
- (id)_projectSubgroupForProductSubgroup:(id)a0 createIfNecessary:(BOOL)a1;
- (id)_projectSubgroupForProject:(id)a0;
- (void)_removeProjectSubgroup:(id)a0;
- (void)_resetProjectSubgroups;
- (void)addHydrationOperation:(id)a0;
- (void)addPhotos:(id)a0;
- (id)addPhotos:(id)a0 toProductSubgroup:(id)a1 error:(id *)a2;
- (id)addPhotosInProjectSubgroup:(id)a0 toProductSubgroup:(id)a1 error:(id *)a2;
- (BOOL)addProjectLayouts:(id)a0 toProductSubgroup:(id)a1 error:(id *)a2;
- (void)borderOptionsDidChange;
- (BOOL)canAddPhotos:(id)a0 error:(id *)a1;
- (BOOL)canAddSizeForPhotosInProjectSubgroup:(id)a0 error:(id *)a1;
- (BOOL)canAddSizeForProjectLayouts:(id)a0 error:(id *)a1;
- (void)changeProjectLayouts:(id)a0 toProductSubgroup:(id)a1;
- (void)changeProjectSubgroup:(id)a0 toProductSubgroup:(id)a1;
- (void)clearHydrationOperations;
- (id)createProjectsForProvisionalProductSubgroup;
- (void)finishingOptionsDidChange;
- (BOOL)hasProjects;
- (BOOL)hasProvisionalProductSubgroup;
- (id)initWithProjectBundle:(id)a0;
- (void)loadProducts:(id /* block */)a0;
- (id)photosAddedToProductSubgroup:(id)a0;
- (id)productSubgroupForProjectSubgroup:(id)a0;
- (id)productSubgroupIdentifiersForAllProjectSubgroups;
- (id)projectPhotos;
- (id)projectSubgroupForProductSubgroup:(id)a0;
- (id)projectSubgroupsWithContentIssueOfType:(unsigned long long)a0;
- (void)reloadCart;
- (void)removeIfNecessary;
- (void)removePhotos:(id)a0;
- (void)removeProjectLayouts:(id)a0;
- (void)removeProjectSubgroup:(id)a0;
- (void)resetCartIfNecessary;
- (void)setProvisionalProductSubgroup:(id)a0;

@end
