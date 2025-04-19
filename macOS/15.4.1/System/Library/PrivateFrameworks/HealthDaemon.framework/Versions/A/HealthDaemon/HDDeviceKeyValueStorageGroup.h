@class HDDeviceContext, NSArray;

@interface HDDeviceKeyValueStorageGroup : NSObject

@property (readonly, nonatomic) HDDeviceContext *deviceContext;
@property (readonly, nonatomic) NSArray *storageEntries;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0 storageEntries:(id)a1;

@end
