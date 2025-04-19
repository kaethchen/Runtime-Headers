@class OSLogDevice, NSString, NSImage, OSActivityStream, NSObject;
@protocol OS_dispatch_queue;

@interface CSKDevice : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trustConnectionSerialQueue;
@property (retain, nonatomic) OSActivityStream *_defaultStream;
@property (retain, nonatomic) OSLogDevice *_deviceRef;
@property (retain, nonatomic) NSString *_hardwareModel;
@property (nonatomic) BOOL _isHostDevice;
@property (readonly, nonatomic) NSString *UDID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *modelID;
@property (retain, nonatomic) NSString *build;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL supportsLogsPersistenceReading;
@property (retain, nonatomic) NSImage *icon;

+ (id)hostDevice;
+ (id)_activityStreamForDevice:(id)a0;
+ (unsigned long long)_deviceTypeForProductID:(id)a0;
+ (unsigned long long)_deviceTypeForProductID:(id)a0 productModel:(id)a1;
+ (unsigned long long)_deviceTypeForProductModel:(id)a0;
+ (id)_hostMachineProductID;
+ (id)_persistenceStreamForDevice:(id)a0;
+ (id)iconForDeviceType:(unsigned long long)a0;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDevice:(id)a0;
- (BOOL)establishTrustWithFailingHandler:(id /* block */)a0;
- (id)initWithUDID:(id)a0 name:(id)a1;
- (id)initWithUDID:(id)a0 name:(id)a1 modelID:(id)a2;
- (id)initWithUDID:(id)a0 name:(id)a1 productID:(id)a2 productModel:(id)a3;
- (id)typeIcon;

@end
