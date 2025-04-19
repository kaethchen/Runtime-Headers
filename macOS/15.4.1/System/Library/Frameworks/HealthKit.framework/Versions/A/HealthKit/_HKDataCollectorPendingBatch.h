@class NSUUID, NSArray, NSDictionary, HKDevice;

@interface _HKDataCollectorPendingBatch : NSObject

@property (readonly, copy, nonatomic) NSUUID *batchUUID;
@property (readonly, copy, nonatomic) NSArray *data;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) HKDevice *device;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSArray *completions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isTransient;
- (id)batchByAddingData:(id)a0 completion:(id /* block */)a1;
- (void)callCompletionsWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithIdentifier:(id)a0 data:(id)a1 metadata:(id)a2 device:(id)a3 options:(unsigned long long)a4 completion:(id /* block */)a5;
- (id)initWithIdentifier:(id)a0 data:(id)a1 metadata:(id)a2 device:(id)a3 options:(unsigned long long)a4 completions:(id)a5;

@end
