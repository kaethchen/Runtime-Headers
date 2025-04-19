@class NSString;

@interface FMInternalOwnerAccount : NSObject <FMOwnerAccountIdentity>

@property (copy, nonatomic) NSString *personId;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;

@end
