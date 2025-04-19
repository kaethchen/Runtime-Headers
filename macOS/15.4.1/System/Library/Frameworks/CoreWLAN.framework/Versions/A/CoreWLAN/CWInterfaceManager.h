@class NSSet, CWWiFiClient;

@interface CWInterfaceManager : NSObject {
    CWWiFiClient *_wifiClient;
}

@property (readonly) NSSet *interfaces;

+ (id)interfaceNames;
+ (id)interfaceManager;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)interfaces;
- (id)interfaceWithName:(id)a0;

@end
