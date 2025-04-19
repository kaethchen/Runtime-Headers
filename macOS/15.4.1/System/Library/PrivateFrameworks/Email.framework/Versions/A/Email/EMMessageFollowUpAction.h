@class EMFollowUp;

@interface EMMessageFollowUpAction : EMMessageChangeAction

@property (readonly, nonatomic) EMFollowUp *followUp;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2 followUp:(id)a3;

@end
