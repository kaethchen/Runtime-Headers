@class NSNumber, NSURL, NSString;

@interface SPProvenanceMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *uniqueID;
@property (retain, nonatomic) NSNumber *rootID;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *teamID;
@property (retain, nonatomic) NSString *signingID;
@property (retain, nonatomic) NSString *cdhash;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;

@end
