@class NSNumber, NSDictionary;

@interface IFunScores : NSObject

@property (retain, nonatomic) NSNumber *serverScore;
@property (retain, nonatomic) NSNumber *localScore;
@property (retain, nonatomic) NSDictionary *domainScores;

- (void).cxx_destruct;
- (id)initWithSFEngagementSignal:(id)a0;

@end
