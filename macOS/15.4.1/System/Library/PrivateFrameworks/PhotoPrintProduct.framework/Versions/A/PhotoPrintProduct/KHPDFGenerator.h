@class KHProject, NSString;
@protocol KHPDFGeneratorDelegate;

@interface KHPDFGenerator : NSObject {
    KHProject *_project;
    NSString *_gpuID;
}

@property (retain, nonatomic) id<KHPDFGeneratorDelegate> delegate;

- (void)dealloc;
- (id)initWithProject:(id)a0;
- (BOOL)_createWithPath:(id)a0 components:(id)a1 pageCount:(long long)a2 error:(id *)a3;
- (id)_newComponentGeneratorForComponent:(id)a0 project:(id)a1;
- (id)_pdfHeaderDictionaryWithPath:(id)a0;
- (void)_retrieveGPUInfo;
- (BOOL)createPreviewWithPath:(id)a0 error:(id *)a1;
- (BOOL)createWithPath:(id)a0 error:(id *)a1;
- (id)pdfCreator;

@end
