@class NSArray;

@interface MLComputePlanDeviceUsageSupportStateMatcher : NSObject

@property (readonly, nonatomic) NSArray *supportStatePatterns;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (long long)matchingSupportStateForValidationMessage:(id)a0;

@end
