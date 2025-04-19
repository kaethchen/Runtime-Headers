@class NSString, NSDictionary, NSArray;

@interface _MLTInferenceBundleTester : NSObject

@property (retain, nonatomic) NSString *errorString;
@property (retain, nonatomic) NSString *extractedBundleDirectory;
@property (retain, nonatomic) NSDictionary *tests;
@property (nonatomic) unsigned long long testInBundle;
@property (nonatomic) unsigned long long failingTestsInBundle;
@property (retain, nonatomic) NSArray *extractedFiles;
@property (nonatomic) long long computeUnit;

- (void)dealloc;
- (void).cxx_destruct;
- (void)runTest:(id)a0;
- (BOOL)cleanupAndReturnError:(struct archive { } *)a0 writerArchive:(struct archive { } *)a1 extractedFiles:(id)a2 error:(id *)a3;
- (void)deleteFiles:(id)a0;
- (id)errorForTest:(id)a0 error:(id *)a1;
- (id)errorIfAny;
- (BOOL)extractBundle:(id)a0 error:(id *)a1;
- (id)initWithBundleAtPath:(id)a0 error:(id *)a1;
- (id)initWithBundleAtPathAndCreateTestCases:(id)a0 computeUnit:(long long)a1 error:(id *)a2;
- (void)populateTestCases;
- (BOOL)runAllTestsInBundle:(id *)a0;
- (BOOL)runTestInBundle:(id)a0 error:(id *)a1;
- (id)testsInBundle;

@end
