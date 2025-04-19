@class NSString, EXSFolder, NSArray;

@interface EXSFolderRepushItem : NSObject

@property (retain, nonatomic) EXSFolder *repushingFolder;
@property (retain, nonatomic) NSString *folderExternalID;
@property (retain, nonatomic) NSArray *folderChanges;
@property (retain, nonatomic) NSString *folderExternalSyncState;

- (void).cxx_destruct;
- (id)initWithFolder:(id)a0 externalID:(id)a1 changeData:(id)a2 externalSyncState:(id)a3;

@end
