@class NSURL, NSMutableDictionary;

@interface FPDiagnosticCollector : NSObject {
    int _fd;
    struct fsid { int val[2]; } _fsid;
    unsigned long long _ino;
    unsigned int _docid;
    NSURL *_parentURL;
    NSURL *_trashURL;
    unsigned long long _stepsNeeded;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *diagnostic;

+ (unsigned long long)getStringCharactersSet:(id)a0;

- (void).cxx_destruct;
- (BOOL)_collectFnameAttributesWithError:(id *)a0;
- (BOOL)_collectInodeAttributesWithError:(id *)a0;
- (BOOL)_collectMountAttributesWithError:(id *)a0;
- (BOOL)_collectParentACLCountWithError:(id *)a0;
- (BOOL)_collectPurgeAttributesWithError:(id *)a0;
- (BOOL)_collectXattrAttributesWithError:(id *)a0;
- (BOOL)_collectdocIDAttributesWithError:(id *)a0;
- (BOOL)_performStep:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_tryReadFirstByteOfFileWithError:(id *)a0;
- (BOOL)collectDiagnosticDiskAttributesWithError:(id *)a0;
- (id)initWithFD:(int)a0 trashURL:(id)a1;

@end
