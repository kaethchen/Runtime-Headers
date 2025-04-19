@class NSArray, FigCaptureTrie;

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {
    NSArray *_requestedBufferAttachments;
    FigCaptureTrie *_requestedBufferAttachmentsTrie;
}

@property (nonatomic) BOOL discardsLateVideoFrames;
@property (nonatomic) BOOL optimizedForPreview;
@property (nonatomic) BOOL sceneStabilityMetadataEnabled;
@property (retain, nonatomic) NSArray *requestedBufferAttachments;
@property (readonly, nonatomic) FigCaptureTrie *requestedBufferAttachmentsTrie;
@property (nonatomic) BOOL cinematicFramingEnabled;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
