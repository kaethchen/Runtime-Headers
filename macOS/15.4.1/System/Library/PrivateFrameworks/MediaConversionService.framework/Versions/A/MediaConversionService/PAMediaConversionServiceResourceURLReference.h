@class NSURL;

@interface PAMediaConversionServiceResourceURLReference : NSObject

@property (retain) NSURL *url;
@property BOOL mustStopAccessingURL;
@property BOOL shouldDeleteOnDeallocation;

+ (BOOL)getPathHash:(unsigned long long *)a0 lastPathComponent:(id *)a1 forDictionaryRepresentation:(id)a2;
+ (id)referenceWithDictionaryRepresentation:(id)a0 error:(id *)a1;
+ (id)referenceWithURL:(id)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (BOOL)getFileSize:(unsigned long long *)a0 error:(id *)a1;
- (void)getPathHash:(unsigned long long *)a0 lastPathComponent:(id *)a1;

@end
