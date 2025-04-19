@class KGGraphManager;

@interface KGGraphManagerRecord : NSObject

@property (retain, nonatomic) KGGraphManager *graphManager;
@property (nonatomic) unsigned long long useCount;

- (void).cxx_destruct;
- (BOOL)decrementUseCount;
- (void)incrementUseCount;
- (id)initWithGraphManager:(id)a0;

@end
