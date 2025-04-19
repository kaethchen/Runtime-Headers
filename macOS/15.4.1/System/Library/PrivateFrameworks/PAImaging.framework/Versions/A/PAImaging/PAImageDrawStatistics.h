@class NSMutableArray;

@interface PAImageDrawStatistics : PAImageDrawStatItem

@property (readonly, nonatomic) NSMutableArray *items;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addItem:(id)a0;
- (double)sharpness;

@end
