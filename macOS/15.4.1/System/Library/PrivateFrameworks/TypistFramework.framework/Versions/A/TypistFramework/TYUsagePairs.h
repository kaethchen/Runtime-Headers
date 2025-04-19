@class NSMutableArray;

@interface TYUsagePairs : NSObject

@property (retain, nonatomic) NSMutableArray *_usagePages;
@property (retain, nonatomic) NSMutableArray *_usages;

- (id)init;
- (void).cxx_destruct;
- (id)usages;
- (id)usagePages;

@end
