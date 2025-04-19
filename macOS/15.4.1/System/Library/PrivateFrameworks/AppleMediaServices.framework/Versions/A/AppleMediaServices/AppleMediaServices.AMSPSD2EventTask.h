@interface AppleMediaServices.AMSPSD2EventTask : NSObject

+ (BOOL)sendInitialPSD2EventWithAction:(id)a0 bag:(id)a1;
+ (void)sendRetryResultPSD2EventWithAction:(id)a0 result:(id)a1 error:(id)a2 bag:(id)a3;

- (id)init;
- (void).cxx_destruct;

@end
