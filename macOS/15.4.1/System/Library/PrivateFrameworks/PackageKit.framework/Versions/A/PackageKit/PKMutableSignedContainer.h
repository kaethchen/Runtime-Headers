@class NSArray, NSMutableArray;

@interface PKMutableSignedContainer : PKSignedContainer {
    struct __SecIdentity { } *_identity;
    NSArray *_intermediateCertificates;
    NSMutableArray *_pathsToAdd;
    unsigned long long _fileSystemCompressionFormat;
}

@property BOOL useTSA;
@property unsigned long long fileSystemCompressionFormat;

- (void)dealloc;
- (BOOL)_archiveToPath:(id)a0 error:(id *)a1;
- (id)_writeIndexBomToPath:(id)a0;
- (BOOL)addFileAtPath:(id)a0 error:(id *)a1;
- (id)initForWritingContainerWithIdentity:(struct __SecIdentity { } *)a0 supportingCertificates:(id)a1;
- (void)startArchivingAtPath:(id)a0 notifyOnQueue:(id)a1 progress:(id /* block */)a2 finish:(id /* block */)a3;

@end
