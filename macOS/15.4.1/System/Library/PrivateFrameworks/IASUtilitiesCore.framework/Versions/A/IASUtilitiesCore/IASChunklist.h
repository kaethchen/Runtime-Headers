@class NSData;

@interface IASChunklist : NSObject

@property unsigned long long chunkCount;
@property BOOL requireSignature;
@property BOOL allowDevSignature;
@property BOOL allowNoSignature;
@property int signatureType;
@property (retain) NSData *chunklistData;
@property struct chunklist_hdr { unsigned int x0; unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *header;
@property struct chunklist_chunk { unsigned int x0; unsigned char x1[32]; } *chunks;
@property (readonly) long long chunkHashType;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (long long)_parseHeader;
- (unsigned long long)chunkSizeForChunk:(unsigned long long)a0;
- (BOOL)validateData:(id)a0 forChunk:(unsigned long long)a1;
- (id)_SHA256ForData:(id)a0;
- (long long)_parseSignature;
- (unsigned long long)_expectedFileSizeFromChunkNumber:(unsigned long long)a0;
- (unsigned long long)_firstInvalidChunkInData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 progressDelegate:(id)a2;
- (long long)_verifyIntegrityOnlySHA;
- (long long)_verifyRSASignature;
- (unsigned long long)firstInvalidChunkInData:(id)a0;
- (unsigned long long)firstInvalidChunkInData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)hashDataForChunk:(unsigned long long)a0;
- (BOOL)validateData:(id)a0;
- (BOOL)validateData:(id)a0 progressDelegate:(id)a1;

@end
