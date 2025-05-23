@class HMBatchRequest;

@interface HMCharacteristicBatchRequest : NSObject

@property (retain, nonatomic) HMBatchRequest *batchRequest;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)characteristicBatchRequestWithReadRequests:(id)a0;
+ (id)characteristicBatchRequestWithWriteRequests:(id)a0;

- (void).cxx_destruct;
- (id)requests;
- (id)initWithBatchRequest:(id)a0;

@end
