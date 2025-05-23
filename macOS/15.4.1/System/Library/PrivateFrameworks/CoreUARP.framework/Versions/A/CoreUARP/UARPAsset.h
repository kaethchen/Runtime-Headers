@class NSObject, UARPSandboxExtension, NSData, NSURL, UARPAssetID, NSFileHandle;
@protocol OS_os_log;

@interface UARPAsset : NSObject {
    NSURL *_url;
    NSFileHandle *_filehandle;
    NSObject<OS_os_log> *_log;
    long long _onceToken;
    UARPSandboxExtension *_sandboxExtension;
}

@property (readonly) UARPAssetID *id;
@property (readonly) NSData *data;
@property (readonly) unsigned long long fileLength;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithID:(id)a0;
- (void)concludeLocalFileAccess;
- (id)getDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initWithID:(id)a0 sandboxToken:(id)a1;
- (id)initWithID:(id)a0 withBuffer:(id)a1;
- (BOOL)prepareLocalFileForUse:(id *)a0;
- (BOOL)setData:(id)a0 atOffset:(unsigned long long)a1 error:(id *)a2;

@end
