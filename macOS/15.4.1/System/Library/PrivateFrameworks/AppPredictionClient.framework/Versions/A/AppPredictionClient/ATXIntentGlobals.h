@class NSDictionary;

@interface ATXIntentGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)approvedSiriKitIntents;
- (BOOL)onlyAcceptBecomeCurrentNSUAs;
- (BOOL)onlyUseEligibleForPrediction;

@end
