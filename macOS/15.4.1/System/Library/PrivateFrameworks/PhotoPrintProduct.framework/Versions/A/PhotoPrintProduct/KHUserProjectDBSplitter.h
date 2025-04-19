@class NSString;

@interface KHUserProjectDBSplitter : NSObject

@property (readonly, nonatomic) NSString *sourceDatabasePath;
@property (readonly, nonatomic) NSString *sourceDatabaseBackupPath;
@property (readonly, nonatomic) NSString *destinationDirectoryPath;

+ (id)splitDatabaseWithSourceDatabasePath:(id)a0 destinationDirectoryPath:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)split;
- (BOOL)_backup:(id)a0 from:(id)a1 to:(id)a2;
- (BOOL)canSplit;
- (id)initWithSourceDatabasePath:(id)a0 destinationDirectoryPath:(id)a1;
- (BOOL)moveAside;
- (id)splitProjectsFromDatabase:(id)a0;

@end
