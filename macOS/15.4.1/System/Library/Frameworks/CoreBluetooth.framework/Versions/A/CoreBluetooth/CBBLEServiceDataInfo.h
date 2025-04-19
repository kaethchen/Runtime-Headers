@class NSData;

@interface CBBLEServiceDataInfo : NSObject

@property (copy, nonatomic) NSData *serviceData;
@property (nonatomic) unsigned short serviceUUID16;
@property (nonatomic) BOOL connectable;

- (void).cxx_destruct;

@end
