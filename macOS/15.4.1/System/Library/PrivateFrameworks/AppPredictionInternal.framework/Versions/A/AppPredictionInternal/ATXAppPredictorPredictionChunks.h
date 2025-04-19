@class NSData;

@interface ATXAppPredictorPredictionChunks : NSObject

@property (retain, nonatomic) NSData *predictionSetChunk;
@property (retain, nonatomic) NSData *feedbackStateChunk;

- (id)init;
- (void).cxx_destruct;
- (id)chunkArray;
- (id)initWithPredictionSetChunk:(id)a0 feedbackStateChunk:(id)a1;
- (id)joinChunks;

@end
