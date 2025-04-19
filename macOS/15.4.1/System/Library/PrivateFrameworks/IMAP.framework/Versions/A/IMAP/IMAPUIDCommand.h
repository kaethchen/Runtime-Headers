@class NSIndexSet, NSString;

@interface IMAPUIDCommand : IMAPSingleCommand

@property (copy) NSIndexSet *UIDs;
@property struct { unsigned long long first; unsigned long long last; } range;
@property (readonly, copy) NSString *mailboxName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0 UIDs:(id)a1;
- (id)initWithMailboxName:(id)a0 range:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
