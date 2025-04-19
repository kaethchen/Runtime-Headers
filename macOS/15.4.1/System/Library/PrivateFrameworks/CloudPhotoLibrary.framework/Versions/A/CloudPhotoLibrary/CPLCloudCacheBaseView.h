@class CPLEngineCloudCache;

@interface CPLCloudCacheBaseView : CPLRecordStorageView

@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache;
@property (readonly, nonatomic) BOOL useFinal;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)recordViewWithScopedIdentifier:(id)a0;
- (id)initWithCloudCache:(id)a0 useFinal:(BOOL)a1;
- (id)recordViewsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;

@end
