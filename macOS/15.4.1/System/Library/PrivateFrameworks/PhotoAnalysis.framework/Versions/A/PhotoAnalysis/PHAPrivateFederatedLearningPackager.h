@interface PHAPrivateFederatedLearningPackager : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyIdentifierRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyIdentifierSmallRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyIdentifierLargeRange;

- (id)_flattenTrainingResults:(id)a0;
- (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2 underlyingError:(id)a3;
- (id)dataPackageFromTrainingResults:(id)a0 error:(id *)a1;

@end
