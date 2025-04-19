@class NSString, NSDictionary, NSData, NSDate, NSUUID;

@interface CUPairedPeer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *dateModified;
@property (copy, nonatomic) NSString *identifierStr;
@property (copy, nonatomic) NSDictionary *acl;
@property (copy, nonatomic) NSData *altIRK;
@property (readonly, copy, nonatomic) NSDictionary *groupInfo;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *publicKey;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)detailedDescription;

@end
