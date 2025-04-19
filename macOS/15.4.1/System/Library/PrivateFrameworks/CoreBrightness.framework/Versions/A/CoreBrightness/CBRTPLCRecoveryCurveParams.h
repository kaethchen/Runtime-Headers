@class CBFloatArray, NSObject;
@protocol OS_os_log;

@interface CBRTPLCRecoveryCurveParams : NSObject {
    NSObject<OS_os_log> *_log;
    unsigned long long _nitsTableSizeEDT;
    float *_nitsTableEDT;
    unsigned long long _apceTableSizeEDT;
    float *_apceTableEDT;
}

@property (readonly) CBFloatArray *apce;
@property (readonly) CBFloatArray *nits;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (BOOL)loadParametersFromService:(unsigned int)a0;

@end
