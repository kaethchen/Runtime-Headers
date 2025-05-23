@class NSString, CKDMMCSItemGroupContext, CKDMMCSItem, C3DownloadChunkContext;
@protocol CKDMMCSItemReaderWriterProtocol;

@interface CKDMMCSTestEncryptedItemReader : NSObject <CKDMMCSItemReaderWriterProtocol>

@property (retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest;
@property (retain, nonatomic) CKDMMCSItem *MMCSItem;
@property (retain, nonatomic) id<CKDMMCSItemReaderWriterProtocol> underlyingItemReader;
@property (readonly, nonatomic) C3DownloadChunkContext *downloadChunkContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)openWithError:(id *)a0;
- (BOOL)closeWithError:(id *)a0;
- (id)getFileMetadataWithError:(id *)a0;
- (id)initWithMMCSItem:(id)a0 MMCSRequest:(id)a1;
- (BOOL)readBytesAtOffset:(unsigned long long)a0 bytes:(char *)a1 length:(unsigned long long)a2 bytesRead:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)writeBytesAtOffset:(unsigned long long)a0 bytes:(char *)a1 length:(unsigned long long)a2 bytesWritten:(unsigned long long *)a3 error:(id *)a4;

@end
