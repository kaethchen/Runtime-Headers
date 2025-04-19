@class NSData;

@interface IOBluetoothSDPUUID : NSData {
    NSData *mUUIDData;
    void *_mReserved;
}

+ (BOOL)supportsSecureCoding;
+ (id)uuid16:(unsigned short)a0;
+ (id)withSDPUUIDRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;
+ (id)uuid32:(unsigned int)a0;
+ (id)uuidWithBytes:(const void *)a0 length:(unsigned int)a1;
+ (id)uuidWithData:(id)a0;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (Class)classForArchiver;
- (Class)classForPortCoder;
- (BOOL)isEqualToData:(id)a0;
- (id)initWithUUID32:(unsigned int)a0;
- (id)initWithUUID16:(unsigned short)a0;
- (struct OpaqueIOBluetoothObjectRef { } *)getSDPUUIDRef;
- (id)getUUIDWithLength:(unsigned int)a0;
- (BOOL)isEqualToUUID:(id)a0;

@end
