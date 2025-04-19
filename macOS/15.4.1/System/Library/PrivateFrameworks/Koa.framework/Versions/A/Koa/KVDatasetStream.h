@class CCSetDonation;

@interface KVDatasetStream : NSObject

@property (readonly, nonatomic) CCSetDonation *donation;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)finish:(id /* block */)a0;
- (id)_cascadeItemFromItem:(id)a0 error:(id *)a1;
- (id)initWithDonation:(id)a0;

@end
