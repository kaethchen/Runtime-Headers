@interface IRPair : NSObject

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (void).cxx_destruct;
- (id)initWithFirst:(id)a0 second:(id)a1;

@end
