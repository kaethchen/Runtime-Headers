@class NSObject;
@protocol OS_os_log;

@interface PILCalibrationManager : NSObject {
    unsigned int _service;
    NSObject<OS_os_log> *_logHandle;
}

- (void)dealloc;
- (id)init;
- (id)copyCalibration;
- (id)copyPILCalibrationFromEDT;
- (id)copyParsedCalibration:(id)a0 source:(long long)a1;
- (long long)getCalibrationSource;
- (id)loadDataFromFDRWithDataClass:(id)a0 subclass:(id)a1;
- (id)loadPILCalibrationFromFDR;

@end
