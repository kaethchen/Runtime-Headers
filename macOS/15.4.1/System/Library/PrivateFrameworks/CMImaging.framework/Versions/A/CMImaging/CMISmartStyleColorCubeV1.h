@protocol MTLTexture;

@interface CMISmartStyleColorCubeV1 : NSObject

@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) id<MTLTexture> backgroundCube;
@property (readonly, nonatomic) id<MTLTexture> foregroundCube;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBackgroundCube:(id)a0 foregroundCube:(id)a1;

@end
