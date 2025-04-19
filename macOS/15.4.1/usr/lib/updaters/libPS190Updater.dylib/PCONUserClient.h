@class NSObject;
@protocol OS_os_log;

@interface PCONUserClient : NSObject {
    unsigned int _service;
    unsigned int _connection;
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned int instanceID;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)disablePCON;
- (BOOL)enablePCON;
- (BOOL)getPCONStatus;
- (id)initWithInstanceID:(unsigned int)a0;

@end
