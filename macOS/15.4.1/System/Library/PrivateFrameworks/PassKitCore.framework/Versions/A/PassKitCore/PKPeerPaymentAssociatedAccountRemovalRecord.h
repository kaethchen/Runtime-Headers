@class NSString, NSDate;

@interface PKPeerPaymentAssociatedAccountRemovalRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long reason;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL hasPresentedNotification;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
