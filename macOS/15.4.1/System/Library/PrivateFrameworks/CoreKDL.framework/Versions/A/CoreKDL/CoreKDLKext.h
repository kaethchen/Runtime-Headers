@class NSString, NSData;

@interface CoreKDLKext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *CDHash;
@property (retain) NSString *teamID;
@property (retain) NSString *bundleID;
@property (retain) NSString *bundleIDHash;
@property (retain) NSString *version;
@property (retain) NSData *CDHashData;
@property (retain) NSData *bundleIDHashData;

+ (id)kextWithCDHash:(id)a0 teamID:(id)a1 bundleID:(id)a2 version:(id)a3;
+ (id)kextWithCDHash:(id)a0 teamID:(id)a1 bundleIDHash:(id)a2 version:(id)a3;
+ (id)kextWithCDHashData:(id)a0 teamID:(id)a1 bundleIDHashData:(id)a2 version:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCDHash:(id)a0 teamID:(id)a1 bundleIDHash:(id)a2 version:(id)a3;

@end
