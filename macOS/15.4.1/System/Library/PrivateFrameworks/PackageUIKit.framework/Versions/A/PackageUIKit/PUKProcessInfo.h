@class NSString;

@interface PUKProcessInfo : NSObject

@property (retain) NSString *bundleIdentifier;
@property unsigned int userIdentifier;
@property int processIdentifier;
@property (nonatomic) BOOL isPlugin;
@property (retain) NSString *extensionPointIdentifier;
@property (retain) NSString *hostIdentifier;
@property (retain) NSString *vendingIdentifier;
@property int hostPID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProcessIdentifier:(int)a0;
- (id)initWithInfoDictionary:(id)a0;
- (id)_bundleIdForPid:(int)a0;
- (long long)actionForProcessComparedToBundleIdsToQuit:(id)a0;
- (id)initWithPluginInfo:(id)a0 vendingIdentifier:(id)a1;
- (id)initWithProcessIdentifier:(int)a0 uid:(unsigned int)a1;

@end
