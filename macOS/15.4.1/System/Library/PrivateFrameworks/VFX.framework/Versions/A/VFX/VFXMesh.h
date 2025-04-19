@class NSString, NSArray, VFXWorld, NSMutableArray;

@interface VFXMesh : NSObject <NSSecureCoding, NSCopying, VFXBoundingBox> {
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
    struct __CFXMesh { } *_mesh;
    unsigned char _isPresentationObject : 1;
    NSMutableArray *_sources;
    NSMutableArray *_elements;
    NSArray *_sourceChannels;
    NSString *_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *meshSources;
@property (readonly, nonatomic) NSArray *meshElements;
@property (readonly, nonatomic) long long meshElementCount;
@property (readonly, nonatomic) NSArray *meshSourceChannels;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[2]; } boundingBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mesh;
+ (id)meshWithMeshRef:(struct __CFXMesh { } *)a0;
+ (id)meshWithSources:(id)a0 elements:(id)a1;
+ (id)meshWithSources:(id)a0 elements:(id)a1 sourceChannels:(id)a2;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (void)setIdentifier:(id)a0;
- (long long)primitiveType;
- (id)debugQuickLookObject;
- (void)setPrimitiveType:(long long)a0;
- (id)world;
- (void *)__CFObject;
- (BOOL)getBoundingSphereCenter:(void *)a0 radius:(float *)a1;
- (void)_syncEntityObjCModel;
- (void)_syncObjCModel;
- (id)keyForNodeAttributes;
- (id)_renderableCopy;
- (id)interleavedCopy;
- (struct __CFXMesh { } *)__createCFObject;
- (void)_discardOriginalTopology;
- (void)_releaseCachedSourcesAndElements;
- (id)debugQuickLookData;
- (id)meshDescription;
- (struct __CFXMesh { } *)meshRef;
- (id)_meshByRemovingSkinnerSources;
- (id)_meshByUnifyingNormalsWithCreaseThreshold:(float)a0;
- (id)_meshByWeldingVerticesWithThreshold:(float)a0 normalThreshold:(float)a1;
- (void)_setupMeshElements;
- (void)_setupMeshSources;
- (void)addWorldReference:(id)a0;
- (id)debugQuickLookObjectWithAssetPathResolver:(id)a0;
- (void)decodeMeshWithCoder:(id)a0;
- (void)didAttachToWorld:(id)a0;
- (void)didDetachFromWorld:(id)a0;
- (void)enumerateDependencies:(id /* block */)a0;
- (id)initWithMeshRef:(struct __CFXMesh { } *)a0;
- (void)makeUniqueID;
- (id)meshElementAtIndex:(long long)a0;
- (id)meshSourcesForSemantic:(id)a0;
- (void)removeWorldReference:(id)a0;
- (void)setMeshRef:(struct __CFXMesh { } *)a0;
- (struct __CFXWorld { } *)worldRef;

@end
