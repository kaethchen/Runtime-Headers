@class NWStatsManager;

@interface NWStatsPollHandler : NSObject

@property (copy) id /* block */ deliveryBlock;
@property (copy) id /* block */ completionBlock;
@property BOOL synchronous;
@property long long instanceNumber;
@property (nonatomic) unsigned long long ntstatContext;
@property (retain) NWStatsManager *manager;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)handleSnapshot:(id)a0;

@end
