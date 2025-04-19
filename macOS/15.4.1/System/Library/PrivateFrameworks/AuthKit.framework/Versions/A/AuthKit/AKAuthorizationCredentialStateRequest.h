@class NSString;

@interface AKAuthorizationCredentialStateRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) BOOL shouldIgnoreUserID;
@property (nonatomic) BOOL shouldIgnoreTeamID;
@property (copy, nonatomic) NSString *userID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
