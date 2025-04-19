@class NSObject;
@protocol OS_os_log;

@interface CBNVRAM : NSObject {
    NSObject<OS_os_log> *_logHandle;
    unsigned int _NVRAM;
}

@property (readonly) float backlightNitsMin;
@property float backlightNitsMax;
@property (readonly) float backlightNitsDefault;

- (void)dealloc;
- (id)init;
- (float)readBacklightNits;
- (void)writeBacklightNits:(float)a0;

@end
