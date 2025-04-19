@class NSArray, NSDictionary, ASTUploadFilesResult, NSNumber;

@interface ASTTestResult : ASTSealablePayload <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *predicates;
@property (readonly) NSDictionary *dictionary;
@property (readonly) NSNumber *testId;
@property (retain) NSNumber *statusCode;
@property (retain) NSDictionary *data;
@property (retain) NSArray *files;
@property (retain) ASTUploadFilesResult *uploadFiles;
@property double testDuration;
@property (retain) NSNumber *allowCellularSizeThreshold;

+ (id)resultWithTestId:(id)a0 parameters:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)generatePayload;
- (id)initWithTestId:(id)a0 parameters:(id)a1;
- (BOOL)sealWithFileSigner:(id /* block */)a0 error:(id *)a1;
- (void)sealWithPayload:(id)a0 signature:(id)a1;
- (void)sealWithSealableFiles:(id)a0;
- (void)setUploadStatusFromSource:(id)a0 withArray:(id)a1;

@end
