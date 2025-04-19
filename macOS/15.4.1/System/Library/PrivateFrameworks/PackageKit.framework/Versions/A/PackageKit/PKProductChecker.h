@class NSArray, NSString, PKDistribution, NSMutableArray;

@interface PKProductChecker : NSObject {
    NSString *_contentPath;
    NSString *_interfaceType;
    PKDistribution *_distribution;
    NSMutableArray *_checkResults;
}

@property BOOL allowExternalPackages;
@property BOOL interfaceTypeRequired;
@property (copy) NSArray *checkedFileAttributes;

+ (id)stringForCheckErrorCode:(int)a0;

- (void)dealloc;
- (void)_checkPackagesForChoice:(id)a0;
- (id)checkResults;
- (id)initWithUnarchivedProduct:(id)a0 interfaceType:(id)a1 error:(id *)a2;

@end
