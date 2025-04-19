@class NSURL, VFXNode, NSMutableDictionary;

@interface VFXReferenceNode : VFXNode {
    NSURL *_referenceURL;
    VFXNode *_referenceNode;
    BOOL _loaded;
    NSMutableDictionary *_overrides;
    NSURL *_sourceDocumentURL;
}

@property (readonly, nonatomic) NSURL *referenceURL;
@property (readonly, nonatomic) VFXNode *referencedNode;
@property (nonatomic) long long loadingPolicy;
@property (readonly, getter=isLoaded) BOOL loaded;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)load;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithNode:(id)a0;
- (void)unload;
- (id)overrides;
- (void)setOverrides:(id)a0;
- (void)_applyOverrides;
- (void)_applyOverride:(id)a0 forKeyPath:(id)a1;
- (void)_applyUnsharing:(id)a0 alreadyShared:(id)a1;
- (void)_diffNode:(id)a0 with:(id)a1 path:(id)a2;
- (void)_diffObject:(id)a0 with:(id)a1 path:(id)a2;
- (BOOL)_isAReference;
- (BOOL)_isNameUnique:(id)a0;
- (void)_loadWithURL:(id)a0;
- (id)_resolveURL;
- (void)addOverride:(id)a0 forKeyPath:(id)a1;
- (void)collectOverrides;
- (void)removeAllOverrides;
- (void)removeForKeyPath:(id)a0;
- (void)setReferenceURL:(id)a0;
- (id)_loadReferencedWorldWithURL:(id)a0;
- (void)_loadWithNode:(id)a0 fromURL:(BOOL)a1;
- (BOOL)isVirtualEnvironmentNode;
- (void)setReferencedNode:(id)a0;

@end
