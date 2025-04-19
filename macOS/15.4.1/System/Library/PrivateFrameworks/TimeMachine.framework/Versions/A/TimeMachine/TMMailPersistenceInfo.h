@class NSString, NSDictionary;

@interface TMMailPersistenceInfo : NSObject {
    id _info;
}

@property (class, readonly, copy, nonatomic) NSString *currentMailVersionDirectoryName;

@property (readonly, copy, nonatomic) NSDictionary *v4MigratedAccountDirectories;

- (void).cxx_destruct;
- (id)initWithMailLibraryDirectory:(id)a0;
- (id)previousMailVersionDirectoryNamesForVersionDirectoryName:(id)a0;

@end
