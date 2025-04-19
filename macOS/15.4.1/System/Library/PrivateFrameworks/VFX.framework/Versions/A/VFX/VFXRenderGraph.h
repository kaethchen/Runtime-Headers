@class NSArray, NSString, VFXWorld;

@interface VFXRenderGraph : NSObject <NSCopying, NSSecureCoding, VFXAsset> {
    id _authoringGraph;
    id _graph;
    id _diagnostics;
    NSString *_name;
    VFXWorld *_world;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)renderGraphDescriptionWithSCNTechniqueDescription:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)graph;
- (id)diagnostics;
- (id)world;
- (void)_compileRenderGraphIfNeeded;
- (void)addWorldReference:(id)a0;
- (id)authoringGraph;
- (void)invalidateCompiledGraph;
- (void)removeWorldReference:(id)a0;
- (void)setAuthoringGraph:(id)a0;

@end
