@class NSString, NSDictionary;
@protocol AXEHIDDeviceDelegate;

@interface AXEHIDDevice : NSObject

@property (nonatomic) BOOL isLoaded;
@property (nonatomic) unsigned long long vendorID;
@property (nonatomic) unsigned long long productID;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *product;
@property (nonatomic) double _minX;
@property (nonatomic) double _minY;
@property (nonatomic) double _maxX;
@property (nonatomic) double _maxY;
@property (nonatomic) struct __IOHIDDevice { } *_hidDevice;
@property (nonatomic) char *_hidReportBuffer;
@property (nonatomic) BOOL _canceled;
@property (weak, nonatomic) id<AXEHIDDeviceDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *deviceInfo;

+ (id)createNewDevice:(struct __IOHIDDevice { } *)a0;

- (void)dealloc;
- (BOOL)load;
- (void).cxx_destruct;
- (void)_closeDevice;
- (id)_initWithHIDDevice:(struct __IOHIDDevice { } *)a0;
- (void)closeAndUnloadAsynchronously;
- (void)handleReportCallback:(int)a0 report:(char *)a1 reportLength:(long long)a2;
- (void)handleValueCallback:(struct __IOHIDValue { } *)a0;
- (BOOL)openAndSeize:(BOOL)a0;

@end
