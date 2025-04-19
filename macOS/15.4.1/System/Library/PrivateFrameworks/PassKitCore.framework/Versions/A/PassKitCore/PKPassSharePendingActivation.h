@class NSString, PKSharingMessage;

@interface PKPassSharePendingActivation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKSharingMessage *originalInvitation;
@property (retain, nonatomic) NSString *shareIdentifier;
@property (nonatomic) BOOL isWaitingOnUserAction;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPassSharePendingActivation:(id)a0;

@end
