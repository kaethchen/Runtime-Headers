@class NSString, NSDictionary, NSURL, NSArray;

@interface MSMailPersistenceInfo : NSObject

@property (class, readonly, copy, nonatomic) NSString *currentMailVersionDirectoryName;

@property (readonly, copy, nonatomic) NSDictionary *persistenceInfo;
@property (readonly, nonatomic) NSURL *mailLibraryDirectory;
@property (readonly, copy, nonatomic) NSString *lastUsedVersionDirectoryName;
@property (readonly, copy, nonatomic) NSArray *allVersionDirectoryNames;
@property (readonly, copy, nonatomic) NSDictionary *v4MigratedAccountDirectories;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMailLibraryDirectory:(id)a0;
- (id)previousMailVersionDirectoryNamesForVersionDirectoryName:(id)a0;

@end
