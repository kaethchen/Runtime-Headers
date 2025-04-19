@class NSString;

@interface UVCDeviceExtensionUnitControl : UVCDeviceControl {
    NSString *_name;
    long long _currentValueSize;
}

@property (readonly) NSString *guidExtensionCode;

- (id)debugDescription;
- (id)name;
- (void).cxx_destruct;
- (unsigned long long)currentValueSize;
- (id)getValueForRequestType:(unsigned char)a0 dataLength:(unsigned long long)a1 error:(id *)a2;
- (id)initWithAttributes:(struct { unsigned short x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 type:(int)a1 entityID:(unsigned long long)a2 guidExtensionCode:(id)a3 delegate:(id)a4;
- (id)parseControl;

@end
