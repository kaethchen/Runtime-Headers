@class NSString;

@interface DUSessionSummary : NSObject

@property (readonly, nonatomic, getter=isRestartRecommended) BOOL restartRecommended;
@property (readonly, copy, nonatomic) NSString *reasonForRestartRecommendation;
@property (readonly, copy, nonatomic) NSString *reasonForRestartRecomendation;

- (void).cxx_destruct;
- (id)_init;

@end
