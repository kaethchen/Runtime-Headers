@class VNSceneprint;

@interface VCPSceneprintDescriptor : NSObject <VCPDistanceDescriptorProtocol> {
    VNSceneprint *_sceneprint;
}

+ (int)preferredPixelFormat;
+ (id)descriptorWithData:(id)a0;
+ (id)descriptorWithImage:(struct __CVBuffer { } *)a0;
+ (BOOL)usePHAssetData;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithImage:(struct __CVBuffer { } *)a0;
- (id)serialize;
- (int)computeDistance:(float *)a0 toDescriptor:(id)a1;

@end
