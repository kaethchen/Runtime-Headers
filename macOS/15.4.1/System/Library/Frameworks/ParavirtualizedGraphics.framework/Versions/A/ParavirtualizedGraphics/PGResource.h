@interface PGResource : NSObject {
    BOOL _isVolatile;
}

@property (nonatomic) BOOL isGuestValid;
@property (nonatomic) BOOL isHostValid;
@property (readonly, nonatomic) BOOL supportsDiscard;
@property (readonly, nonatomic) BOOL needsComputePaging;
@property (readonly, nonatomic) BOOL needsSync;
@property (readonly, nonatomic) BOOL needsPrepare;

- (void)discard;
- (id)getHeap;
- (void)evictInEncoder:(id)a0;
- (void)evictInComputeEncoder:(id)a0;
- (id)getBuffer;
- (id)getResource;
- (unsigned int)getSharedTextureBackingID;
- (id)getTexture;
- (id)newChildBufferResourceWithBuffer:(id)a0;
- (id)newChildTextureResourceWithTexture:(id)a0;
- (void)prepareInComputeEncoder:(id)a0;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInComputeEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
