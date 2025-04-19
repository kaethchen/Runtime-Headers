@class NSURL, NSFileHandle, NSXMLDocument, NSData;

@interface XARSigner : NSObject

@property (retain) NSURL *inputArchiveURL;
@property (retain) NSFileHandle *inputArchiveHandle;
@property (retain) NSXMLDocument *toc;
@property unsigned long long inputHeapContentsOffsetInArchive;
@property int checksumAlgorithm;
@property (retain) NSData *dataToSign;
@property (retain) NSData *cmsSignatureData;
@property (retain) NSData *rsaSignatureData;

- (void).cxx_destruct;
- (id)errorWithCode:(long long)a0;
- (id)errorWithCode:(long long)a0 userInfo:(id)a1;
- (id)CMSSignatureNodeForHeapRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 certificates:(id)a1;
- (id)RSASignatureNodeForHeapRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 certificates:(id)a1;
- (id)appropriateDigestFor:(id)a0 error:(id *)a1;
- (id)initWithArchiveAtURL:(id)a0 signatureProvider:(id)a1 error:(id *)a2;
- (id)signatureNodeWithTag:(id)a0 style:(id)a1 heapRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 certificates:(id)a3;
- (unsigned long long)sizeOfDigestAppropriateForArchive;
- (BOOL)writeArchiveToURL:(id)a0 error:(id *)a1;

@end
