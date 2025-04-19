@class NSDictionary;

@interface GPSLaunchTask : NSObject

@property (retain, nonatomic) NSDictionary *applicationInfo;
@property (nonatomic) struct __LSASN { } *launchingApplication;
@property (nonatomic) int sessionID;

- (void).cxx_destruct;
- (id)initWithApplicationInfo:(id)a0 launchingApplication:(struct __LSASN { } *)a1 sessionID:(int)a2;

@end
