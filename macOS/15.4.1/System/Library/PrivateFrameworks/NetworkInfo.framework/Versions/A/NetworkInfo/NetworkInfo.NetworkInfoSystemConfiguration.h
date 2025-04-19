@interface NetworkInfo.NetworkInfoSystemConfiguration : NSObject {
    void /* unknown type, empty encoding */ v6gateway;
    void /* unknown type, empty encoding */ v4gateway;
    void /* unknown type, empty encoding */ v6addresses;
    void /* unknown type, empty encoding */ v4addresses;
    void /* unknown type, empty encoding */ primaryInterface;
    void /* unknown type, empty encoding */ dnsConfiguration;
}

- (id)init;
- (void).cxx_destruct;

@end
