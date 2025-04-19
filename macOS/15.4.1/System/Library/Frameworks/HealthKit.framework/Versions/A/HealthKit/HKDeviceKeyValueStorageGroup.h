@class HKDeviceContext, NSArray;

@interface HKDeviceKeyValueStorageGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKDeviceContext *deviceContext;
@property (readonly, nonatomic) NSArray *storageEntries;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceContext:(id)a0 storageEntries:(id)a1;

@end
