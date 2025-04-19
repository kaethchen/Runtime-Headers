@class NSURL, NSObject;
@protocol CCSetEnumerator;

@interface CKVSnapshotManager : NSObject {
    NSURL *_rootDirectoryURL;
    NSObject<CCSetEnumerator> *_setEnumerator;
}

+ (id)sharedInstance;
+ (id)writeProfileToFile:(id)a0 withFilename:(id)a1 inDirectory:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)cleanup;
- (id)captureToFileInDirectory:(id)a0 error:(id *)a1;
- (id)_buildProfile:(id)a0 error:(id *)a1;
- (id)_getFilesSortedByCreationDateForDirectoryPath:(id)a0;
- (BOOL)_purgeProfileSnapshots;
- (id)captureInMemory:(id *)a0;
- (id)initWithRootDirectoryURL:(id)a0 setEnumerator:(id)a1;

@end
