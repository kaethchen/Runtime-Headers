@class NSArray, RSTemporalMeta, RSGeometryMeta, NSDictionary, RSFloorPlan, RSSemanticImage;
@protocol RSFrame, RSPointCloud;

@interface RSNodeSampleMessage : RSNodeMessage

@property (readonly, nonatomic) id<RSFrame> frame;
@property (readonly, nonatomic) id<RSPointCloud> pointCloud;
@property (readonly, nonatomic) RSFloorPlan *floorPlan;
@property (readonly, nonatomic) RSTemporalMeta *temporalMeta;
@property (readonly, nonatomic) RSGeometryMeta *geometryMeta;
@property (readonly, nonatomic) RSSemanticImage *semanticImage;
@property (readonly, nonatomic) NSArray *keyFrames;
@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) NSArray *mirrorPoints;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly, copy, nonatomic) NSDictionary *attachments;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithObjects:(id)a0;
- (unsigned long long)type;
- (id)initWithFrame:(id)a0;
- (id)initWithPointCloud:(id)a0;
- (id)initWithFloorPlan:(id)a0;
- (id)initWithGeometryMeta:(id)a0;
- (id)initWithKeyFrames:(id)a0;
- (id)initWithMirrorPoints:(id)a0;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 attachments:(id)a1;
- (id)initWithSemanticImage:(id)a0;
- (id)initWithTemporalMeta:(id)a0;

@end
