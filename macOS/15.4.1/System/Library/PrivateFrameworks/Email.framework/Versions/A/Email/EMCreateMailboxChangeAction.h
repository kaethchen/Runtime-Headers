@class NSString;

@interface EMCreateMailboxChangeAction : EMMailboxChangeAction

@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMailboxName:(id)a0 parentMailbox:(id)a1;
- (id)initWithMailboxName:(id)a0 parentMailboxID:(id)a1;

@end
