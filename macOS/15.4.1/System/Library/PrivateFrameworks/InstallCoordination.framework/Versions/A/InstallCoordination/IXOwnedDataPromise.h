@class NSString, NSURL, IXOwnedDataPromiseSeed;

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXOwnedDataPromiseSeed *seed;
@property (retain, nonatomic) NSString *targetLastPathComponent;
@property (retain, nonatomic) NSURL *stagedPath;
@property (readonly, nonatomic) NSURL *stagingBaseDir;


- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(id)a0;
- (void)_internalInit;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2;
- (Class)seedClass;
- (BOOL)setTargetLastPathComponent:(id)a0 error:(id *)a1;
- (id)stagingBaseDir;
- (id)targetLastPathComponentWithError:(id *)a0;

@end
