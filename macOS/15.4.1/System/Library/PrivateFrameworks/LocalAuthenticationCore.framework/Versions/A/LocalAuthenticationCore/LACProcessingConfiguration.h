@protocol LACEvaluationRequestProcessor;

@interface LACProcessingConfiguration : NSObject

@property (readonly, nonatomic) id<LACEvaluationRequestProcessor> nextProcessor;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)initWithNextProcessor:(id)a0;

@end
