@interface NURenderPipelineFilter : NSObject

@property (readonly, nonatomic) id /* block */ filterBlock;

+ (id)stopAtTagFilter:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
