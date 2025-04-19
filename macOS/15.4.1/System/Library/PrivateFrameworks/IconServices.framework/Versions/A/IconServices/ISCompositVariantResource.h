@class NSMutableDictionary, NSDictionary, NSURL, NSString, NSMutableArray;

@interface ISCompositVariantResource : NSObject <ISVariantResourceProviderProtocol, ISVariantResourceProtocol>

@property (retain) NSDictionary *compositionInfo;
@property (retain) NSURL *baseURL;
@property (retain) NSMutableDictionary *vectorResources;
@property (retain) NSMutableDictionary *imageSetResources;
@property (retain) NSDictionary *recipes;
@property (retain) NSMutableArray *layers;
@property (readonly) NSDictionary *assetCatalogReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *variantName;
@property (readonly) unsigned long long flags;

+ (id)resourceWithURL:(id)a0 resourceInfo:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)addResourceWithResourceURL:(id)a0 namePrefix:(id)a1 error:(id *)a2;
- (BOOL)addResourceWithURL:(id)a0 error:(id *)a1;
- (BOOL)drawInContext:(struct CGContext { } *)a0 withScale:(unsigned long long)a1 error:(id *)a2;
- (struct CGImage { } *)imageForSize:(unsigned long long)a0 scale:(unsigned long long)a1 error:(id *)a2;
- (id)imageResourceNamed:(id)a0;
- (id)initWithCompositionInfo:(id)a0 baseURL:(id)a1 variantName:(id)a2 flags:(unsigned long long)a3;
- (void)loadLayers;
- (void)loadResources;
- (id)numberResourceNamed:(id)a0;
- (id)recipeNamed:(id)a0;
- (id)resolvedResourceNamed:(id)a0;
- (id)resolvedResourceNamed:(id)a0 ofClass:(Class)a1;
- (id)textResourceNamed:(id)a0;
- (id)vectorResourceNamed:(id)a0;

@end
