@class NSString;

@interface KHLayerAttribute : KHAttribute <KHJSONGeneratorProtocol> {
    long long _layerId;
    NSString *_category;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateModelFromJSON:(id)a0 inDatabase:(id)a1 bundlePath:(id)a2;
+ (void)preloadAttributesForLayers:(id)a0;

- (void)dealloc;
- (id)category;
- (void)setCategory:(id)a0;
- (id)JSONRepresentation;
- (long long)layerId;
- (void)cacheCategory:(id)a0;
- (void)cacheLayerId:(long long)a0;
- (void)setLayerId:(long long)a0;
- (id)stringFromLayerAttributeAssetId:(long long)a0;

@end
