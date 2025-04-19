@class NSMutableDictionary, XCTCapabilities;

@interface XCTCapabilitiesBuilder : NSObject

@property (readonly, copy) NSMutableDictionary *capabilitiesDictionary;
@property (readonly, copy) XCTCapabilities *capabilities;

+ (id)capabilitiesFromProvider:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerCapability:(id)a0;
- (void)registerCapability:(id)a0 version:(unsigned long long)a1;
- (void)upgradeCapability:(id)a0 toVersion:(unsigned long long)a1;

@end
