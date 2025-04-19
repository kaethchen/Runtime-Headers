@class NSString;

@interface BCSManualFetchTrigger : NSObject <BCSFetchTrigger>

@property (copy, nonatomic) id /* block */ fetchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scheduleFetchBlock:(id /* block */)a0;
- (void)triggerFetchForReason:(unsigned long long)a0 completion:(id /* block */)a1;

@end
