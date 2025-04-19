@class NSString, NUImageGeometry;
@protocol NUMedia, NUPipelineNode, NUGeometry;

@interface NUChannelMediaData : NUChannelData <NUMedia> {
    NUImageGeometry *_geometry;
}

@property (readonly, nonatomic) id<NUPipelineNode> node;
@property (readonly, nonatomic) id<NUMedia> media;
@property (readonly, nonatomic) id<NUGeometry> geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaDataWithCIImage:(id)a0;

- (void).cxx_destruct;
- (id)initWithFormat:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)evaluate:(out id *)a0;
- (id)initWithNode:(id)a0 format:(id)a1;

@end
