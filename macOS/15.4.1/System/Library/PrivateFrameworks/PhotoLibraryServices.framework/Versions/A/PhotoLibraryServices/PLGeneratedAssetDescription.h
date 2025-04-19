@class NSString;

@interface PLGeneratedAssetDescription : PLGraphNodeContainer

@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) short analysisVersion;
@property (nonatomic) long long analysisSourceType;

+ (id)fetchGeneratedAssetDescriptionsGroupedByAssetIdWithType:(long long)a0 forAssetsIDs:(id)a1 inLibrary:(id)a2;
+ (id)newNodeContainerWithManagedObjectContext:(id)a0;
+ (void)resetGeneratedAssetDescriptionsForAsset:(id)a0;
+ (void)setGeneratedAssetDescriptionForAsset:(id)a0 fromDictionaries:(id)a1;
+ (void)prepareForDeletingIncomingEdge:(id)a0;
+ (void)_enumerateGraphNodesForAssetObjectIDs:(id)a0 inContext:(id)a1 withBlock:(id /* block */)a2;
+ (id)_fetchGeneratedAssetDescriptionEdgesForAsset:(id)a0;
+ (id)_labelIDWithCode:(unsigned int)a0 context:(id)a1;
+ (id)_labelWithCode:(unsigned int)a0 context:(id)a1;
+ (id)_newNodeContainerWithManagedObjectContext:(id)a0 dictionary:(id)a1;
+ (void)_updateAsset:(id)a0 nodeContainer:(id)a1;
+ (id)fetchGeneratedAssetDescriptionNodesForAsset:(id)a0;
+ (void)resetGeneratedAssetDescriptionsForAsset:(id)a0 sourceTypes:(id)a1;

- (id)description;
- (id)asset;
- (id)_insertEdgeForAsset:(id)a0;
- (void)_updateChangeFlagForProperties;

@end
