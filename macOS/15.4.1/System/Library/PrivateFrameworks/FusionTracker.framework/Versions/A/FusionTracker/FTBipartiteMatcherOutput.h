@class NSArray;

@interface FTBipartiteMatcherOutput : NSObject

@property (readonly, nonatomic) NSArray *matches;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned int usedIterations;

- (void).cxx_destruct;
- (id)initWithMatches:(id)a0 state:(unsigned long long)a1 usedIterations:(unsigned int)a2;

@end
