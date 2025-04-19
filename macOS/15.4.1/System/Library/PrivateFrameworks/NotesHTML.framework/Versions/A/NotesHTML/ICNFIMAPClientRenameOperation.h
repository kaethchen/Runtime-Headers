@class NSString;

@interface ICNFIMAPClientRenameOperation : ICNFIMAPClientMailboxOperation

@property (copy) NSString *nameForNewMailbox;
@property (copy) NSString *nameForNewMailboxArgument;

- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)activityString;
- (id)commandTypeString;
- (id)detailsString;
- (id)initWithMailboxName:(id)a0 newMailboxName:(id)a1;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (id)debugCommandString;

@end
