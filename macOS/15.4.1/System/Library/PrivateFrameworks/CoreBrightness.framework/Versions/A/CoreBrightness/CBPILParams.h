@class CBFloatArray, NSObject;
@protocol OS_os_log;

@interface CBPILParams : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (readonly) CBFloatArray *pilCurveLux;
@property (readonly) CBFloatArray *pilCurveNits;
@property (readonly) BOOL blackBezel;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (id)initWithLuxArray:(float *)a0 nitsArray:(float *)a1 lutSize:(unsigned long long)a2 andBlackBezel:(BOOL)a3;
- (BOOL)loadParametersFromService:(unsigned int)a0;

@end
