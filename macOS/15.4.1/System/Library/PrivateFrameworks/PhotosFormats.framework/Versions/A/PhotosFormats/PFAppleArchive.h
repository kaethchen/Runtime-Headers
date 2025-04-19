@interface PFAppleArchive : PFAppleArchiveStream {
    struct AAArchiveStream_impl { } *_archiveStream;
}

- (void)dealloc;
- (BOOL)close:(id *)a0;
- (BOOL)openForWriting:(id *)a0;
- (BOOL)openForReading:(id *)a0;
- (BOOL)decodeContentOfDirectoryWithError:(id *)a0;
- (BOOL)decodeContentsToDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)decodeData:(id *)a0 filename:(id *)a1 error:(id *)a2;
- (BOOL)encodeContentOfDirectoryAtURL:(id)a0 entryPredicate:(id /* block */)a1 error:(id *)a2;
- (BOOL)encodeData:(id)a0 filename:(id)a1 error:(id *)a2;

@end
