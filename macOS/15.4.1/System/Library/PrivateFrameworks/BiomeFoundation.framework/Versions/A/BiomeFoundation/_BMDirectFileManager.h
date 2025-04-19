@class NSString, BMFileHandle;

@interface _BMDirectFileManager : BMFileManager <BMFileManagerImpl> {
    NSString *_directory;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _setUpLock;
    BMFileHandle *_directoryHandle;
}

- (void).cxx_destruct;
- (BOOL)setUpWithError:(id *)a0;
- (id)_fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (id)_openTemporaryDirectoryWithError:(id *)a0;
- (BOOL)_removeDirectoryAtPath:(id)a0 error:(id *)a1;
- (BOOL)_removeFileAtPath:(id)a0 error:(id *)a1;
- (id)_temporaryFileHandleWithProtection:(int)a0 unlink:(BOOL)a1 error:(id *)a2;
- (id)initWithDirectory:(id)a0 cachingOptions:(long long)a1;
- (BOOL)replaceFileAtPath:(id)a0 withData:(id)a1 protection:(int)a2 flags:(int)a3 error:(id *)a4;
- (id)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 protection:(int)a2 flags:(int)a3 error:(id *)a4;
- (id)temporaryFileHandleWithProtection:(int)a0 error:(id *)a1;

@end
