@class NSString, NSDictionary;

@interface AKDeveloperTeam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *privateEmail;
@property (copy, nonatomic) NSDictionary *apps;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseInfo:(id)a0;

@end
