@class NSURL, NSString, NSFileManager;

@interface CNCDDatabasePreflightTask : CNTask

@property (readonly) NSURL *url;
@property (readonly) unsigned long long options;
@property (readonly) NSString *path;
@property (readonly) NSFileManager *fileManager;
@property BOOL shouldCreateMyCard;

- (id)description;
- (id)run;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1;
- (BOOL)databaseFileIsEmpty;
- (BOOL)databaseFileIsReadOnly;
- (BOOL)databaseIsActuallyDirectory;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 fileManager:(id)a2;
- (id)makeSureContainingFolderExists;

@end
