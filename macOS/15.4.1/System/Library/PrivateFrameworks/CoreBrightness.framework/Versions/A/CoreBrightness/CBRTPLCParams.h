@class CBRTPLCRecoveryCurveParams, NSObject;
@protocol OS_os_log;

@interface CBRTPLCParams : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (readonly) CBRTPLCRecoveryCurveParams *recoveryCurve;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (BOOL)loadParametersFromService:(unsigned int)a0;

@end
