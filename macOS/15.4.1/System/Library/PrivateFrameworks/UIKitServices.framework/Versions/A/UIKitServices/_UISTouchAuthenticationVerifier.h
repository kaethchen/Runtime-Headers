@class NSDictionary, UISTransform3DGrader;

@interface _UISTouchAuthenticationVerifier : NSObject {
    NSDictionary *_thresholds;
    UISTransform3DGrader *_lenientGrader;
    UISTransform3DGrader *_strictGrader;
}

@property (readonly, nonatomic) BOOL shouldSuppressInauthenticTouches;

+ (BOOL)shouldAuthenticateServiceBundleId:(id)a0;
+ (id)verifierForServiceBundleId:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)transformGradeFailureReasonsForRecord:(id)a0;
- (id)verifyRecord:(id)a0;

@end
