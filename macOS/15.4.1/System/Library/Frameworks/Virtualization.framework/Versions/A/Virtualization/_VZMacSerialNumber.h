@class NSString;

@interface _VZMacSerialNumber : NSObject <NSCopying> {
    struct AvpSerialNumber { struct array<unsigned char, 10UL> { unsigned char __elems_[10]; } _serial_number; } _serialNumber;
}

@property (readonly, copy) NSString *string;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0;

@end
