@class NSDictionary, PKArchive;

@interface PKSignedContainer : NSObject {
    PKArchive *_archive;
    NSDictionary *_metadata;
}

@property BOOL performsAssessmentIfNeeded;
@property BOOL userConsentedOperation;
@property unsigned long long options;
@property (readonly) unsigned long long fileSystemCompressionFormat;

- (void)dealloc;
- (void)cancelOperation:(id)a0;
- (BOOL)_assessURL:(id)a0 withQuarantineFlags:(unsigned int)a1;
- (id)_archive;
- (BOOL)_assessContainerReturningShouldFlagContents:(BOOL *)a0;
- (id)_initCommon;
- (BOOL)_setAssessment:(BOOL)a0 ofItemAtPath:(id)a1;
- (void)_startUnarchivingAtPath:(id)a0 cancelHandler:(id)a1 notifyOnQueue:(id)a2 progress:(id /* block */)a3 finish:(id /* block */)a4;
- (id)initForReadingFromContainerAtURL:(id)a0 error:(id *)a1;
- (id)startUnarchivingAtPath:(id)a0 notifyOnQueue:(id)a1 progress:(id /* block */)a2 finish:(id /* block */)a3;

@end
