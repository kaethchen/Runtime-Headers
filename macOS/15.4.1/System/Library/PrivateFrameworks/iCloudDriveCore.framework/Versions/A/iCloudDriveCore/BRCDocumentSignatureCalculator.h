@interface BRCDocumentSignatureCalculator : NSObject

+ (id)_calculateSignatureForFileAtURL:(id)a0 boundaryKey:(id)a1 error:(id *)a2;
+ (id)_calculateSignatureForPackageAtURL:(id)a0 boundaryKey:(id)a1 error:(id *)a2;
+ (id)calculateSignatureForURL:(id)a0 boundaryKey:(id)a1 error:(id *)a2;

@end
