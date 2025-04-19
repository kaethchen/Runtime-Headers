@class NSMutableArray;

@interface CSVTRejectDetectDataExtractor : NSObject

@property (nonatomic) unsigned long long jsRejectCount;
@property (nonatomic) unsigned long long hsRejectCount;
@property (nonatomic) unsigned long long spkrIdRejectCount;
@property (retain, nonatomic) NSMutableArray *hsScores;
@property (retain, nonatomic) NSMutableArray *jsScores;
@property (retain, nonatomic) NSMutableArray *spkrIdScores;
@property (retain, nonatomic) NSMutableArray *hsTimeDelta;
@property (retain, nonatomic) NSMutableArray *jsTimeDelta;
@property (retain, nonatomic) NSMutableArray *spkrIdTimeDelta;
@property (nonatomic) float hsThreshold;
@property (nonatomic) float jsThreshold;
@property (nonatomic) float phsThreshold;
@property (nonatomic) float pjsThreshold;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)totalEventCount;
- (void)classifyEventWithMetaData:(id)a0;

@end
