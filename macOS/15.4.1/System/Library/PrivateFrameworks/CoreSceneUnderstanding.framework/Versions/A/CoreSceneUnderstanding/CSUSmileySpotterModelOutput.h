@class MLMultiArray;

@interface CSUSmileySpotterModelOutput : NSObject

@property (readonly) BOOL generateBlobFace;
@property (readonly) MLMultiArray *generateBlobFaceProb;
@property (readonly) long long smileySpotterRevision;

- (id)initWithOutput:(BOOL)a0 Probability:(id)a1 smileySpotterRevision:(long long)a2;

@end
