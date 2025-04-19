@interface PILRawCalibration : NSObject

@property (nonatomic) long long type;
@property (nonatomic) struct { unsigned char version; unsigned char checksum; unsigned short cilCalibration; unsigned short milCalibration; unsigned long long reserved; unsigned short reserved2; } edtCalibration;
@property (nonatomic) struct { unsigned char version; unsigned char checksum; unsigned short cilCalibration; unsigned short milCalibration; unsigned int reserved; } fdrCalibration;

@end
