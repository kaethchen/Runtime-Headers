@class NSString, _TtC11AppStoreKit21HostProcessIdentifier;

@interface AppStoreKit.HostProcessIdentifier : NSObject {
    void /* unknown type, empty encoding */ hostBundleId;
}

@property (class, nonatomic, readonly) _TtC11AppStoreKit21HostProcessIdentifier *shared;
@property (class, nonatomic, readonly) NSString *hostBundleIdDidChangeNotification;

@property (nonatomic, copy) NSString *hostBundleId;

- (id)init;
- (void).cxx_destruct;

@end
