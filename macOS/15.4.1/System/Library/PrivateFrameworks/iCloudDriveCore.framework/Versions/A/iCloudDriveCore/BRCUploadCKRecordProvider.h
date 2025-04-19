@class NSNumber, BRCStageRegistry;

@interface BRCUploadCKRecordProvider : NSObject {
    BRCStageRegistry *_stageRegistry;
    NSNumber *_deviceID;
}

- (void).cxx_destruct;
- (id)initWithStageRegistry:(id)a0 deviceID:(id)a1;
- (id)_createFileRecordForURL:(id)a0 item:(id)a1 fileSize:(long long *)a2 boundaryKey:(id *)a3 error:(id *)a4;
- (id)_createPackageRecordForURL:(id)a0 item:(id)a1 stageID:(id)a2 fileSize:(long long *)a3 boundaryKey:(id *)a4 error:(id *)a5;
- (id)createCKRecordFor:(id)a0 document:(id)a1 stageID:(id)a2 mtime:(unsigned long long)a3 etag:(id)a4 xattrSignature:(id)a5 transferSize:(long long *)a6 boundaryKey:(id *)a7 error:(id *)a8;

@end
