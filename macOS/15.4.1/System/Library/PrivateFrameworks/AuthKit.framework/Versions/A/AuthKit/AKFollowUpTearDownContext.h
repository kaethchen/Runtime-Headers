@class NSString;

@interface AKFollowUpTearDownContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSString *akAction;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *txnid;
@property (copy, nonatomic) NSString *idmsData;
@property (nonatomic) BOOL isContinuityPush;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
