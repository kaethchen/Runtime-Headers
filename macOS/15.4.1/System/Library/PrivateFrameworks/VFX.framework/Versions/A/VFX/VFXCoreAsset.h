@class NSString, VFXBehaviorGraph, VFXWorld, VFXCoreEntityHandle;

@interface VFXCoreAsset : NSObject <VFXAsset, VFXBehaviorSupport, NSSecureCoding, NSCopying> {
    VFXCoreEntityHandle *_entityHandle;
    BOOL _isTextureSource;
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) VFXBehaviorGraph *behaviorGraph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetWithEntityObject:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entityTag;
- (id)world;
- (id)entityObject;
- (BOOL)isTextureSource;
- (void)addWorldReference:(id)a0;
- (void)didAttachToWorld:(id)a0;
- (void)didDetachFromWorld:(id)a0;
- (void)enumerateDependencies:(id /* block */)a0;
- (id)initWithEntityObject:(id)a0;
- (void)removeWorldReference:(id)a0;
- (void)resolveTag:(id)a0 remap:(id)a1;
- (void)setEntityHandle:(id)a0;
- (void)setIsTextureSource:(BOOL)a0;
- (struct __CFXWorld { } *)worldRef;

@end
