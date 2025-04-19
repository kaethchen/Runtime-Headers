@class NSString, NSArray, NSMutableDictionary, NSMutableArray, PHCollection;

@interface PXPhotoKitCollectionMenuNode : NSObject {
    NSMutableArray *_childNodes;
    NSMutableDictionary *_childNodesByLocalIdentifier;
}

@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSArray *childNodes;

+ (id)rootNodeForAssetCollectionsContainingAsset:(id)a0 excludedAssetCollection:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (void)addChildNode:(id)a0;
- (void)sortChildNodes;

@end
