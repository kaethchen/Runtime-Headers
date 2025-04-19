@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface CBALSServiceClient : NSObject <CBHIDServiceProtocol> {
    NSMutableArray *_alsServices;
    id /* block */ _callback;
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCallback:(id /* block */)a0;
- (BOOL)addHIDALSService:(id)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)getAggregatedLux:(float *)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;

@end
