@class PS190IICDevice, NSString, PCONUserClient;

@interface PS190Instance : NSObject {
    PS190IICDevice *_iicDevice;
    PCONUserClient *_pconUserClient;
    NSString *_rootPath;
}

@property (readonly) unsigned long long type;
@property (readonly) BOOL enabled;

- (id)description;
- (void).cxx_destruct;
- (BOOL)enable;
- (id)initWithRootPath:(id)a0;
- (id)findDevice;
- (id)findHandle;
- (id)initWithIICDevice:(id)a0;

@end
