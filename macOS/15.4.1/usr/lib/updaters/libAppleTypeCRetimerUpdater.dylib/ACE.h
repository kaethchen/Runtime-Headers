@class AppleTypeCRetimerHPM, NSString, NSObject, IECSInterface_GoldRestore2;
@protocol OS_os_log;

@interface ACE : NSObject {
    IECSInterface_GoldRestore2 *_interface;
    NSObject<OS_os_log> *_log;
    unsigned char _routerID;
    AppleTypeCRetimerHPM *_hpm;
    BOOL _isForceDFUModeEnabled;
}

@property (readonly) NSString *chipInfo;

+ (id)availableRouterIDs;

- (void).cxx_destruct;
- (BOOL)executeTask:(id)a0;
- (int)retimerEnterDFU;
- (BOOL)dfufTaskRunning;
- (BOOL)disableDFUfTaskIfActive;
- (BOOL)executeIECSCommand:(unsigned int)a0 withData:(char *)a1 dataLength:(unsigned int)a2;
- (BOOL)initForRouterID:(unsigned char)a0;
- (id)initWithRouterID:(unsigned char)a0;
- (BOOL)retimerEnterDFULegacy;
- (BOOL)retimerEnterForceDFU:(BOOL)a0;
- (void)retimerExitDFU;
- (BOOL)retimerExitForceDFU;
- (int)retimerForcePower;
- (BOOL)retimerRemoveForcePower;

@end
