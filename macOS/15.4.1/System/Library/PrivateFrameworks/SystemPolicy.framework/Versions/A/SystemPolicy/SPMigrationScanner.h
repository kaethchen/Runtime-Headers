@class NSURL, NSArray;

@interface SPMigrationScanner : NSObject

@property (readonly, nonatomic) NSURL *volumeRoot;
@property (readonly, nonatomic) NSArray *allKextURLs;
@property (readonly, nonatomic) NSArray *allBundleURLs;

- (void).cxx_destruct;
- (id)initWithRoot:(id)a0;
- (BOOL)performMigrationScan;

@end
