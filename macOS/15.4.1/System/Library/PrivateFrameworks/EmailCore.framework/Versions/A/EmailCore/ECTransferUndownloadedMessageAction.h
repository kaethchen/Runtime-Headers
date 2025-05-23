@class NSString, NSArray, NSURL, ECLocalMessageActionID;

@interface ECTransferUndownloadedMessageAction : ECLocalMessageAction <ECTransferUndownloadedMessageActionBuilder>

@property (nonatomic) long long transferType;
@property (retain, nonatomic) NSURL *sourceMailboxURL;
@property (retain, nonatomic) NSURL *destinationMailboxURL;
@property (copy, nonatomic) NSString *oldestPersistedRemoteID;
@property (retain, nonatomic) NSArray *itemsToDelete;
@property (retain, nonatomic) ECLocalMessageActionID *persistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (void)updateWithCompletedCopyItems:(id)a0;

@end
