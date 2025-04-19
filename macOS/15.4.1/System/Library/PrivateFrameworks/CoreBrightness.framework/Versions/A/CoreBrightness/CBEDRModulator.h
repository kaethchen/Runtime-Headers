@class NSArray, NSObject;
@protocol OS_os_log;

@interface CBEDRModulator : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property (nonatomic) BOOL enabled;
@property (retain) NSArray *nitsDataPointsConfig;
@property (retain) NSArray *headroomDataPointsConfig;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isConfigured;
- (BOOL)modulatedHeadroom:(float *)a0 forHeadroom:(float)a1 forSDRNits:(float)a2;

@end
