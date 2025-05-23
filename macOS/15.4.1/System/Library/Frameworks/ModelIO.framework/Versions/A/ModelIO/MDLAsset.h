@class MDLAnimatedVector3Array, NSMapTable, NSURL, MDLVertexDescriptor, NSMutableArray, NSUnitLength;
@protocol MDLMeshBufferAllocator, MDLObjectContainerComponent, MDLAssetResolver;

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration> {
    NSURL *_URL;
    NSMutableArray *_objects;
    double _startTime;
    double _endTime;
    BOOL _isSceneKitBridged;
    NSMapTable *_components;
}

@property (readonly, nonatomic) struct MDLAABB { } _bounds;
@property (nonatomic) double _timeCodesPerSecond;
@property (retain, nonatomic) NSURL *_temporaryFolderURL;
@property (retain, nonatomic) NSUnitLength *unitLength;
@property (nonatomic) float metersPerUnit;
@property (retain, nonatomic) MDLAnimatedVector3Array *extents;
@property (readonly, nonatomic) struct { } boundingBox;
@property (nonatomic) double frameInterval;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) void /* unknown type, empty encoding */ upAxis;
@property (readonly, retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) id<MDLAssetResolver> resolver;
@property (readonly, retain, nonatomic) id<MDLMeshBufferAllocator> bufferAllocator;
@property (readonly, retain, nonatomic) MDLVertexDescriptor *vertexDescriptor;
@property (readonly, nonatomic) unsigned long long count;
@property (retain, nonatomic) id<MDLObjectContainerComponent> masters;
@property (retain, nonatomic) id<MDLObjectContainerComponent> originals;
@property (retain, nonatomic) id<MDLObjectContainerComponent> animations;

+ (BOOL)canImportFileExtension:(id)a0;
+ (BOOL)canExportFileExtension:(id)a0;
+ (id)placeLightProbesWithDensity:(float)a0 heuristic:(long long)a1 usingIrradianceDataSource:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithURL:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeObject:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)components;
- (id)initWithURL:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_commonInit;
- (id)objects;
- (id)childObjectsOfClass:(Class)a0;
- (id)componentConformingToProtocol:(id)a0;
- (BOOL)exportAssetToURL:(id)a0 error:(id *)a1;
- (id)initThroughSCNKitBridgeWithURL:(id)a0 options:(id)a1 error:(id)a2;
- (id)initThroughSCNKitBridgeWithURL:(id)a0 preserveTopology:(BOOL)a1 error:(id)a2;
- (id)initWithBufferAllocator:(id)a0;
- (void)loadTextures;
- (void)resolveTextures;
- (void)_conformVertexBuffers:(id)a0 error:(id *)a1;
- (struct { })boundingBoxAtTime:(double)a0;
- (void)enumerateChildObjectsOfClass:(Class)a0 usingBlock:(id /* block */)a1 stopPointer:(BOOL *)a2;
- (BOOL)exportAssetToURL:(id)a0;
- (id)initWithData:(id)a0 name:(id)a1 vertexDescriptor:(id)a2 bufferAllocator:(id)a3 preserveTopology:(BOOL)a4 error:(id *)a5;
- (id)initWithURL:(id)a0 bufferAllocator:(id)a1 preserveIndexing:(BOOL)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 bufferAllocator:(id)a1 preserveIndexing:(BOOL)a2 options:(id)a3 error:(id *)a4;
- (id)initWithURL:(id)a0 vertexDescriptor:(id)a1 bufferAllocator:(id)a2;
- (id)initWithURL:(id)a0 vertexDescriptor:(id)a1 bufferAllocator:(id)a2 preserveTopology:(BOOL)a3 error:(id *)a4;
- (id)objectAtPath:(id)a0;
- (void)setComponent:(id)a0 forProtocol:(id)a1;

@end
