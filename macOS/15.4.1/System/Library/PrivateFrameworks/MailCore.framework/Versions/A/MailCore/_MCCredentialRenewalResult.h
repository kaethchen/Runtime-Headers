@class NSError;

@interface _MCCredentialRenewalResult : NSObject

@property (nonatomic) long long renewResult;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithResult:(long long)a0 error:(id)a1;

@end
