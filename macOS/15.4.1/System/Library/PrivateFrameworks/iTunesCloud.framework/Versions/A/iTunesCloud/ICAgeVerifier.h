@class NSDate;

@interface ICAgeVerifier : NSObject <NSCopying>

@property (nonatomic) long long status;
@property (readonly, nonatomic, getter=isExplicitContentAllowed) BOOL explicitContentAllowed;
@property (readonly, nonatomic) NSDate *verificationExpirationDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExpirationDate:(id)a0;
- (void)runAgeVerification;

@end
