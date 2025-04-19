@class SNFileServerInfo;

@interface SNFileServerDiscoveryResult : NSObject <SNResult> {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) SNFileServerInfo *serverInfo;
@property (nonatomic, readonly) unsigned long long state;

- (id)init;
- (void).cxx_destruct;

@end
