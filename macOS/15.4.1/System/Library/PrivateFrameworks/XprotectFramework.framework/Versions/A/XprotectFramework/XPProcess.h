@class NSURL, NSString;

@interface XPProcess : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *executable_url;
@property (readonly, nonatomic) NSString *cdhash;
@property (readonly, nonatomic) NSString *signing_identifier;
@property (readonly, nonatomic) NSString *team_identifier;
@property (readonly, nonatomic) NSString *sha256hash;
@property (readonly, nonatomic) BOOL notarized;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithPath:(id)a0 withCdhash:(id)a1 withSigningID:(id)a2 withTeamID:(id)a3 withSHA256Sum:(id)a4 withNotarization:(BOOL)a5;
- (id)initWithURL:(id)a0 withCdhash:(id)a1 withSigningID:(id)a2 withTeamID:(id)a3 withSHA256Sum:(id)a4 withNotarization:(BOOL)a5;

@end
