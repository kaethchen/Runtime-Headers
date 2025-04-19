@interface ANSTActionPrediction : NSObject

@property (nonatomic) float confidence;
@property (readonly, nonatomic) unsigned long long action;

- (id)description;
- (id)initWithAction:(unsigned long long)a0;

@end
