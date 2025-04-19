@class NSMutableDictionary;

@interface AUHostingServiceInstanceMap : NSObject {
    NSMutableDictionary *_instances;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerInstance:(id)a0 instance:(id)a1;
- (id)retrieveInstance:(id)a0;
- (void)unregisterInstance:(id)a0;

@end
