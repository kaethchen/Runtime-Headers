@interface AVPointCloudData : NSObject {
    struct __CVBuffer { } *_dataBuffer;
    long long _projectorMode;
}

@property (readonly) unsigned int pointCloudFormatType;
@property (readonly) long long pointCount;
@property (readonly) const void *points;
@property (readonly) const float *confidenceScores;
@property (readonly) const void *pointsAndConfidenceScores;
@property (readonly) const char *spotIdentifiers;
@property (readonly) const char *bankIdentifiers;
@property (readonly) struct __CVBuffer { } *pointCloudDataBuffer;
@property (readonly) long long projectorMode;

+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithDataBuffer:(struct __CVBuffer { } *)a0;
- (id)jasperPointCloud;

@end
