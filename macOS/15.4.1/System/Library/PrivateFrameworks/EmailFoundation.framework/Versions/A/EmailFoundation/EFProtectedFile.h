@class _EFProtectedFile, NSString, _EFBackgroundProcessingAssertion;

@interface EFProtectedFile : NSObject <EFProtectedFile>

@property (readonly, nonatomic) _EFProtectedFile *file;
@property (readonly, nonatomic) _EFBackgroundProcessingAssertion *assertion;
@property (readonly, nonatomic) BOOL backgroundProcessingIsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 isSensitive:(BOOL)a1 protectionType:(id)a2;
- (id)initWithFilePath:(id)a0 protectionType:(id)a1;
- (id)initWithSensitiveFilePath:(id)a0 protectionType:(id)a1;
- (id)requestBackgroundProcessingForDuration:(double)a0 error:(id *)a1;

@end
