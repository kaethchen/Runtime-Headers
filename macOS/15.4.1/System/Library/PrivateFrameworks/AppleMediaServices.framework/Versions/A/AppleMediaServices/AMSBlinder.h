@interface AMSBlinder : NSObject

+ (id)finalizeBlindedDataWithPrivateInput:(id)a0 timeStamp:(id)a1 priceType:(id)a2 adamId:(id)a3 serverData:(id)a4 error:(id *)a5;
+ (id)generateRandomPrivateInput;
+ (id)generateTimestamp;
+ (id)makeBlindedDataWithPrivateInputData:(id)a0;
+ (void)removeCachedClientForPrivateInput:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
