@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {
    const void *mDataBytes;
}

@property (retain, nonatomic) OCPZipPackage *zipPackage;

- (void).cxx_destruct;
- (BOOL)start;
- (id)read;
- (BOOL)isBinaryReader;
- (void)restartReaderToUseDecryptedDocument;
- (BOOL)retainDecryptorWithErrorCode:(int *)a0;
- (BOOL)verifyFileFormat;

@end
