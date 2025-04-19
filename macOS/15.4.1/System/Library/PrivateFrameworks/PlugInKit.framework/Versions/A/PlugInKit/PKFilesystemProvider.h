@class NSString;
@protocol PKNSBundleProxy;

@interface PKFilesystemProvider : NSObject <PKFilesystemProvider>

@property (readonly) id<PKNSBundleProxy> mainBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bundleWithURL:(id)a0;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (id)dataWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)contentsOfDirectoryAtURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)writeToURL:(id)a0 withData:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
