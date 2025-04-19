@class NSArray;

@interface VisionCoreISPInferenceNetworkPostProcessingOutput : NSObject

@property (retain, nonatomic) NSArray *fullBodyResults;
@property (retain, nonatomic) NSArray *hands;
@property (readonly, nonatomic) struct __CVBuffer { } *personImageBuffer;
@property (readonly, nonatomic) unsigned int personImageBufferOrientation;
@property (readonly, nonatomic) struct __CVBuffer { } *salientPersonImageBuffer;
@property (readonly, nonatomic) unsigned int salientPersonImageBufferOrientation;
@property (readonly, nonatomic) struct __CVBuffer { } *skinImageBuffer;
@property (readonly, nonatomic) unsigned int skinImageBufferOrientation;
@property (readonly, nonatomic) struct __CVBuffer { } *hairImageBuffer;
@property (readonly, nonatomic) unsigned int hairImageBufferOrientation;
@property (readonly, nonatomic) struct __CVBuffer { } *skyImageBuffer;
@property (readonly, nonatomic) unsigned int skyImageBufferOrientation;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPostProcessedPersonImageBuffer:(struct __CVBuffer { } *)a0 personImageOrientation:(unsigned int)a1 salientPersonImageBuffer:(struct __CVBuffer { } *)a2 salientPersonImageBufferOrientation:(unsigned int)a3 skinImageBuffer:(struct __CVBuffer { } *)a4 skinImageBufferOrientation:(unsigned int)a5 hairImageBuffer:(struct __CVBuffer { } *)a6 hairImageBufferOrientation:(unsigned int)a7 skyImageBuffer:(struct __CVBuffer { } *)a8 skyImageBufferOrientation:(unsigned int)a9;

@end
