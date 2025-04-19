@class PKArchive;

@interface PKProductUnarchiver : NSObject {
    PKArchive *_productArchive;
}

@property BOOL useIndexBom;
@property BOOL preserveExtAttrsAndACLs;

- (void)dealloc;
- (BOOL)_unarchiveCPIOToPath:(id)a0 error:(id *)a1;
- (BOOL)_unarchiveNonCPIOToPath:(id)a0 error:(id *)a1;
- (id)initWithProductURL:(id)a0;
- (BOOL)unarchiveToPath:(id)a0 error:(id *)a1;

@end
