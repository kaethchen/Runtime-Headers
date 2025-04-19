@class NSArray;

@interface EMMessageDeleteAllAction : EMMessageChangeAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)signpostType;
- (id)initWithMailboxes:(id)a0 origin:(long long)a1 actor:(long long)a2 messageListItemsToExclude:(id)a3;

@end
