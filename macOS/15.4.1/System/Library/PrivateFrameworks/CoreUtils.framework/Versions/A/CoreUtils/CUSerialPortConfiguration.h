@class NSString;

@interface CUSerialPortConfiguration : NSObject

@property (nonatomic) long long baudRate;
@property (copy, nonatomic) NSString *devicePath;
@property (nonatomic) long long flowControl;
@property (nonatomic) unsigned long long flags;

- (void).cxx_destruct;

@end
