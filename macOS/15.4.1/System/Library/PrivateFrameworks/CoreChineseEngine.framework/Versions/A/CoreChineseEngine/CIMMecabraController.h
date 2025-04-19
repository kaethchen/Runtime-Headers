@class NSTimer, NSMutableDictionary;

@interface CIMMecabraController : NSObject

@property (retain, nonatomic) NSMutableDictionary *mecabraRefDictionary;
@property (retain, nonatomic) NSMutableDictionary *applicationContextDictionary;
@property (retain, nonatomic) NSTimer *maintenanceTimer;
@property (nonatomic) BOOL logStateSet;
@property (retain, nonatomic) id mobileAssetListener;

+ (id)sharedInstance;
+ (id)TIInputModeIdentifierFrom:(int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)flushDynamicData;
- (void)updateDictionaryPaths;
- (id)applicationContextForInputMethodType:(int)a0;
- (struct __Mecabra { } *)mecabraEngineForInputMethodType:(int)a0;
- (void)performMaintenanceImmediately;
- (void)performMaintenanceOnMainThread;
- (void)restartMaintenanceTimer;
- (void)setApplicationContext:(id)a0 inputMethodType:(int)a1;
- (void)setMecabraEngine:(struct __Mecabra { } *)a0 forInputMethodType:(int)a1;
- (void)updateDictionaryPathsFor:(int)a0;

@end
