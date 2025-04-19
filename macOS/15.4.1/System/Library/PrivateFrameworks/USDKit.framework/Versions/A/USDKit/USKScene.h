@class USKNode, NSURL;

@interface USKScene : USKObject {
    struct TfRefPtr<pxrInternal__aapl__pxrReserved__::UsdStage> { struct TfRefBase *_refBase; } _usdStage;
    NSURL *_fileURL;
}

@property (readonly, nonatomic) USKNode *rootNode;

+ (id)newSceneWithURL:(id)a0;
+ (id)newSceneWithData:(id)a0 name:(id)a1;
+ (id)newSceneWithData:(id)a0 name:(id)a1 error:(id *)a2;
+ (id)newSceneWithURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)save;
- (id)metadata;
- (id)initWithData:(id)a0 name:(id)a1;
- (id)newNodeAtPath:(id)a0 type:(id)a1;
- (void)saveAndCreateUSDZPackageWithURL:(id)a0;
- (BOOL)setDictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1 value:(id)a2;
- (BOOL)setMetadataWithKey:(id)a0 value:(id)a1;
- (id)objectAtPath:(id)a0;
- (BOOL)exportToURL:(id)a0;
- (id)initSceneFromURL:(id)a0;
- (id)metadataWithKey:(id)a0;
- (id)nodeAtPath:(id)a0;
- (id)nodeIterator;
- (id)customMetadataWithKey:(id)a0;
- (id)dictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1;
- (id)initSceneFromURL:(id)a0 error:(id *)a1;
- (id)loadedNodeIterator;
- (id)propertyAtPath:(id)a0;
- (id)subLayerOffsets;
- (void)addSubLayerWithPath:(id)a0;
- (void)addSubLayerWithPath:(id)a0 offset:(id)a1;
- (void)dumpUSDA;
- (id)initWithData:(id)a0 name:(id)a1 error:(id *)a2;
- (id)initWithUsdStage:(struct TfRefPtr<pxrInternal__aapl__pxrReserved__::UsdStage> { struct TfRefBase *x0; })a0 fileURL:(id)a1;
- (id)newNodeAtPath:(id)a0 type:(id)a1 specifier:(id)a2;
- (void)saveAndCreateARKitUSDZPackageWithURL:(id)a0;
- (BOOL)setCustomMetadata:(id)a0 value:(id)a1;
- (id)subLayerPaths;
- (struct TfRefPtr<pxrInternal__aapl__pxrReserved__::UsdStage> { struct TfRefBase *x0; })usdStage;

@end
