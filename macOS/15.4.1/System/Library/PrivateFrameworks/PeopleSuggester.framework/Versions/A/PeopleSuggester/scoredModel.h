@class NSString;

@interface scoredModel : NSObject

@property double score;
@property (retain, nonatomic) NSString *modelKey;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithModelKey:(id)a0 score:(double)a1;

@end
