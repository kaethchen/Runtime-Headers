@class NSString, NSDictionary, ISIconset, NSMutableDictionary;

@interface ISVariant : NSObject <ISIconsetVariant>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDictionary *assetCatalogReference;
@property unsigned int type;
@property (readonly, weak) ISIconset *iconset;
@property (readonly) NSString *name;
@property (readonly) NSMutableDictionary *resources;
@property (retain) ISVariant *selectedVariant;
@property int sizeSet;

+ (id)resourceTypes;

- (void).cxx_destruct;
- (BOOL)addResourceWithURL:(id)a0 resourceInfo:(id)a1;
- (id)icnsWithFlags:(long long)a0;
- (struct CGImage { } *)imageForSize:(unsigned long long)a0 scale:(unsigned long long)a1 errors:(id *)a2;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(unsigned int)a1;
- (id)initWithName:(id)a0 iconset:(id)a1;
- (id)initWithType:(unsigned int)a0 sizeSet:(int)a1;

@end
