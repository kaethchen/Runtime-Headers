@class NSMutableArray;

@interface PFFolder : PFFile

@property (retain, nonatomic) NSMutableArray *files;
@property (retain, nonatomic) NSMutableArray *folders;
@property (nonatomic) BOOL isLeaf;

- (id)init;
- (void).cxx_destruct;
- (void)addFile:(id)a0;
- (void)addFolder:(id)a0;
- (void)addFolders:(id)a0;
- (void)addFiles:(id)a0;

@end
