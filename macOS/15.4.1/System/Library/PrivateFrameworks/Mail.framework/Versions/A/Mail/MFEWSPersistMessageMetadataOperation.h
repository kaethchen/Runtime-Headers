@class NSString, MFEWSMailboxItemsBatch;
@protocol MFEWSPersistMessageMetadataOperationDelegate;

@interface MFEWSPersistMessageMetadataOperation : MFEWSPersistenceTaskOperation

@property (weak, nonatomic) id<MFEWSPersistMessageMetadataOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *mailboxURL;
@property (readonly, nonatomic) MFEWSMailboxItemsBatch *batch;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (BOOL)_headersNeedUpdateForLibraryMessage:(id)a0 withEWSItemType:(id)a1;
- (id)initWithMailboxURL:(id)a0 batch:(id)a1;

@end
