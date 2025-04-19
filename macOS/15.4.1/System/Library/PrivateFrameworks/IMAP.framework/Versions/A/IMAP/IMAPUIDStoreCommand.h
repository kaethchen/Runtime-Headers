@class NSArray;

@interface IMAPUIDStoreCommand : IMAPUIDCommand {
    NSArray *_flagsOrGmailLabels;
}

@property (readonly) BOOL forGmailLabels;
@property BOOL add;
@property (readonly, copy) NSArray *serverFlags;
@property (readonly, copy) NSArray *gmailLabels;

- (void).cxx_destruct;
- (id)activityString;
- (void)_imapClientUIDStoreCommonInitForGmailLabels:(BOOL)a0 add:(BOOL)a1 flagsOrGmailLabels:(id)a2;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (id)initWithMailboxName:(id)a0 UIDs:(id)a1;
- (id)initWithMailboxName:(id)a0 UIDs:(id)a1 add:(BOOL)a2 flags:(id)a3;
- (id)initWithMailboxName:(id)a0 UIDs:(id)a1 add:(BOOL)a2 gmailLabels:(id)a3;
- (id)initWithMailboxName:(id)a0 range:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithMailboxName:(id)a0 range:(struct { unsigned long long x0; unsigned long long x1; })a1 add:(BOOL)a2 flags:(id)a3;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
