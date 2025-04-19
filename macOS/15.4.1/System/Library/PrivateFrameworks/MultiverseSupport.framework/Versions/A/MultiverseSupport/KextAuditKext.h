@class NSData, NSString;

@interface KextAuditKext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *cdHash;
@property (retain) NSData *bundleIDHash;
@property (retain) NSString *teamID;
@property (retain) NSString *version;

+ (id)kextWithCDHash:(id)a0 andBundleIDHash:(id)a1 andTeamID:(id)a2 andVersion:(id)a3;

- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCDHash:(id)a0 andBundleIDHash:(id)a1 andTeamID:(id)a2 andVersion:(id)a3;
- (BOOL)xpcDictionary:(id *)a0;

@end
