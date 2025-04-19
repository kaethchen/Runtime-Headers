@class NSArray, NSNumber;

@interface AXMindNetConfiguration : NSObject

@property (readonly, nonatomic) NSArray *filterThresholds;
@property (readonly, nonatomic) NSNumber *nmsThreshold;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
