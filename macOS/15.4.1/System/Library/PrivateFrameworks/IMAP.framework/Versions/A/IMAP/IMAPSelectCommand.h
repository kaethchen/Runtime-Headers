@class IMAPMailbox;

@interface IMAPSelectCommand : IMAPMailboxCommand {
    BOOL _delayed;
}

@property (retain) IMAPMailbox *imapMailbox;
@property BOOL useCondStore;
@property BOOL delayed;
@property (readonly) BOOL readOnly;

+ (BOOL)automaticallyNotifiesObserversOfDelayed;

- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (BOOL)handlesAllUntaggedResponses;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
