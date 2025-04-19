@class NSArray, NSString;
@protocol MTLTexture, MTLBuffer;

@interface VFX.VFXEntityObject : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ referencedEntityManager;
    void /* unknown type, empty encoding */ localEntityManager;
    void /* unknown type, empty encoding */ _isTombstoned;
}

@property (nonatomic, readonly) NSArray *presentationBindings;
@property (nonatomic, retain) id<MTLTexture> clientTexture;
@property (nonatomic, retain) struct CGImage { } *clientCGImage;
@property (nonatomic, readonly) NSArray *bindings;
@property (nonatomic, readonly) NSArray *intersectionFunctions;
@property (nonatomic, readonly) id<MTLBuffer> particleHeaderBuffer;
@property (nonatomic, readonly) long long particleHeaderBufferOffset;
@property (nonatomic, readonly) id<MTLBuffer> particleDataBuffer;
@property (nonatomic, readonly) long long particleDataBufferOffset;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (nonatomic) float opacity;
@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (nonatomic) struct { } orientation;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic, readonly) NSString *textureAbsolutePath;
@property (nonatomic, readonly) BOOL isLocal;
@property (nonatomic, readonly) long long objectID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *tag;

- (void)dealloc;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)restart;
- (void)addTo:(id)a0;
- (void)killParticles;
- (void)removeFromScene;
- (BOOL)_setValue:(id)a0 forKeyPath:(id)a1;
- (id)_valueForKeyPath:(id)a0 world:(id)a1;
- (id)init:(long long)a0 privateEntityManager:(id)a1;
- (id)init:(long long)a0 sharedEntityManager:(id)a1;
- (void)setBeamed;
- (void)updateBridgedReferencesWithBridgeable:(id)a0 objectByIdentifier:(id)a1;

@end
