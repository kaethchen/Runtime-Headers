@class NSString;

@interface MFEWSDeleteMailboxTaskOperation : MFEWSPersistenceTaskOperation

@property (nonatomic) BOOL didDelete;
@property (readonly, copy, nonatomic) NSString *folderIDString;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithFolderIDString:(id)a0;

@end
