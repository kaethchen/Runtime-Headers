@class AppleVirtualPlatformHostKey, NSData, NSMutableArray;

@interface AppleVirtualPlatformHostKeyData : NSObject {
    long long _maxDataSize;
    unsigned long long _chipID;
    unsigned long long _ecid;
    NSMutableArray *_hostKeyDatas;
}

@property (readonly, nonatomic) AppleVirtualPlatformHostKey *currentHostKey;
@property (readonly, nonatomic) NSData *dataRepresentation;

- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0 maxDataSize:(long long)a1 chipID:(unsigned long long)a2 ecid:(unsigned long long)a3 updatedDataRepresentation:(BOOL *)a4 error:(id *)a5;
- (id)initWithMaxDataSize:(long long)a0 chipID:(unsigned long long)a1 ecid:(unsigned long long)a2 error:(id *)a3;

@end
