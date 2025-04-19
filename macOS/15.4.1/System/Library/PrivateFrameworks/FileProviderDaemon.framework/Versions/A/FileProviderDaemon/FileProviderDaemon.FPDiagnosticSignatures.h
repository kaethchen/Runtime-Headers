@interface FileProviderDaemon.FPDiagnosticSignatures : NSObject

+ (BOOL)isErrorMatchingSignaturesWithJsonString:(id)a0 error:(id)a1 direction:(id)a2 jobCode:(id)a3;
+ (id)validateJSONSignaturesWithJsonString:(id)a0;

- (id)init;

@end
