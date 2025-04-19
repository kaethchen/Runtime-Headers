@class KHLayer, NSString, NSMutableDictionary, KHTreatment, NSMutableSet, NSLock, KHLayerRenderer;

@interface KHTreatmentLayer : KHModel <KHJSONGeneratorProtocol> {
    long long _treatmentId;
    long long _layerId;
    long long _layerType;
    long long _outside;
    long long _sequence;
    KHLayerRenderer *_renderer;
    KHTreatment *_treatment;
    KHLayer *_layer;
    NSLock *_rendererLock;
    NSMutableSet *_attributes;
    NSMutableDictionary *_attributeCategories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateModelFromJSON:(id)a0 inDatabase:(id)a1 bundlePath:(id)a2;
+ (id)hostFrameAttributeKeyFromLayerAttributeKey:(id)a0 forTreatmentLayerKey:(id)a1;
+ (id)treatmentLayerWithTreatmentId:(long long)a0 layerId:(long long)a1;

- (void)dealloc;
- (id)attributes;
- (void)remove;
- (long long)sequence;
- (void)setSequence:(long long)a0;
- (void)unload;
- (void)clearCache;
- (id)layer;
- (id)attributeForKey:(id)a0;
- (long long)layerType;
- (void)setLayerID:(long long)a0;
- (id)_renderer;
- (long long)treatmentId;
- (void)setTreatmentID:(long long)a0;
- (id)treatment;
- (id)JSONRepresentation;
- (long long)layerId;
- (long long)outside;
- (void)cacheLayerType:(long long)a0;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)assetForId:(long long)a0;
- (Class)attributeClass;
- (id)attributesForCategory:(id)a0;
- (void)cacheLayerID:(long long)a0;
- (void)cacheOutside:(long long)a0;
- (void)cacheSequence:(long long)a0;
- (void)cacheTreatmentID:(long long)a0;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(BOOL)a5;
- (id)hostFrameAttributeKeyFromLayerAttributeKey:(id)a0;
- (id)initWithModelId:(id)a0;
- (id)initWithTreatment:(id)a0;
- (id)layerFrameForParentFrame:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFrame:(id)a0 atScale:(double)a1;
- (struct { double x0; BOOL x1; double x2; BOOL x3; double x4; BOOL x5; double x6; BOOL x7; })safeRectMarginForPath:(struct CGPath { } *)a0 atScale:(double)a1;
- (void)setLayerType:(long long)a0;
- (void)setOutside:(long long)a0;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2;
- (long long)sortByDefault:(id)a0;
- (id)treatmentLayerKey;

@end
