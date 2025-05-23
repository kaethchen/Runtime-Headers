@class NSString;

@interface SKPaymentAppleIDAuthorizationRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 teamIdentifier:(id)a1;

@end
