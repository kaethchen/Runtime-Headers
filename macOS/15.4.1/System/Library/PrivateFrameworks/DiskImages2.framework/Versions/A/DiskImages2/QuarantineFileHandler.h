@interface QuarantineFileHandler : NSObject

@property (nonatomic) struct _qtn_file { } *qtFile;
@property (readonly, nonatomic) BOOL isQuarantined;

- (void)dealloc;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)applyMountPointsWithBSDName:(id)a0 error:(id *)a1;
- (BOOL)checkErrorWithQtnInitResult:(int)a0 error:(id *)a1;
- (id)getFileInfoWithError:(id *)a0;
- (id)initWithFD:(int)a0 error:(id *)a1;
- (id)initWithFlag:(unsigned int)a0 error:(id *)a1;

@end
