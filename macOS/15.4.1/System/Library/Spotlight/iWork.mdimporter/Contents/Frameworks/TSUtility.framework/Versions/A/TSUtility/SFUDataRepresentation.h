@class NSData;

@interface SFUDataRepresentation : NSObject {
    BOOL mHasHash;
    unsigned int mHash;
    BOOL mHasSha1Hash;
    NSData *mSha1Hash;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (long long)encodedLength;
- (BOOL)isEncrypted;
- (id)inputStream;
- (long long)dataLength;
- (BOOL)isReadable;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (struct CGDataProvider { } *)cgDataProvider;
- (BOOL)hasSameLocationAs:(id)a0;
- (unsigned long long)readIntoData:(id)a0;
- (id)sha1Hash;
- (unsigned int)uint32Hash;
- (struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)xmlDocument;
- (struct _xmlTextReader { } *)xmlReader;
- (struct _xmlTextReader { } *)xmlReaderForGzippedData;
- (struct _xmlTextReader { } *)xmlReaderForGzippedDataWithInputStream:(id *)a0;
- (struct _xmlTextReader { } *)xmlReaderWithReadCallback:(void /* function */ *)a0;

@end
