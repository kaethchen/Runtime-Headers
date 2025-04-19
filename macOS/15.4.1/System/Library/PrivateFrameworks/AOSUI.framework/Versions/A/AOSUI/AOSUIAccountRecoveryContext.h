@class NSURL, NSString;

@interface AOSUIAccountRecoveryContext : NSObject <NSCopying>

@property BOOL recoveryKeyStatus;
@property BOOL recoveryKeyEligible;
@property (copy, nonatomic) NSURL *recoveryKeyURL;
@property (copy, nonatomic) NSString *recoveryKeyHttpMethod;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0;
- (id)initWithRecoveryKeyStatus:(BOOL)a0 recoveryKeyEligible:(BOOL)a1;

@end
