@class ICStoreRequestContext, ICUserVerificationContext;

@interface ICUserVerificationRequest : NSObject <NSCopying>

@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (readonly, copy, nonatomic) ICUserVerificationContext *verificationContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(id /* block */)a0;
- (id)initWithVerificationContext:(id)a0;

@end
