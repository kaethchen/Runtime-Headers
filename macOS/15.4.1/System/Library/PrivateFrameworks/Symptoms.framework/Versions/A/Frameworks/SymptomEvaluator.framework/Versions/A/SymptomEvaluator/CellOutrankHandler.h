@class NSString;

@interface CellOutrankHandler : NSObject <StateWatcherDelegate, WiFiShimDelegate, CoreTelephonyShimDelegate, ConfigurableObjectProtocol>

@property (nonatomic) BOOL systemForeground;
@property (nonatomic) unsigned int activationIdentifier;
@property (nonatomic) BOOL cellOutranksWiFi;
@property (nonatomic) unsigned int currentCellOutrankState;
@property (nonatomic) BOOL cellOutrankIconControl;
@property (nonatomic) BOOL nonIdle;
@property (nonatomic) BOOL motionRelaySubscribed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)configureFromPrefs:(id)a0;
- (int)configureInstance:(id)a0;

@end
