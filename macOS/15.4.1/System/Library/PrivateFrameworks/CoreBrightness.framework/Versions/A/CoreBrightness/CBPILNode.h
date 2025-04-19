@class NSObject, CBPILParams;
@protocol OS_os_log;

@interface CBPILNode : NSObject {
    NSObject<OS_os_log> *_log;
    unsigned int _service;
}

@property (readonly) CBPILParams *pil;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;

@end
