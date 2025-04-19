@class NSArray;
@protocol MFEWSRetrievePersistedFolderDataDelegate;

@interface MFEWSRetrievePersistedFolderDataOperation : MCTaskHandlerOperation

@property (weak, nonatomic) id<MFEWSRetrievePersistedFolderDataDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *mailboxURLs;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithMailboxURLs:(id)a0;

@end
