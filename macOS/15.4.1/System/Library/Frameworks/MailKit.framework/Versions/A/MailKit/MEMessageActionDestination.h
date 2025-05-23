@interface MEMessageActionDestination : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) MEMessageActionDestination *inbox;
@property (class, readonly, nonatomic) MEMessageActionDestination *trash;
@property (class, readonly, nonatomic) MEMessageActionDestination *archive;
@property (class, readonly, nonatomic) MEMessageActionDestination *junk;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long mailboxType;

+ (id)allowedMailboxTypes;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDefaultMailboxType:(long long)a0;

@end
