@class NSString;

@interface DoNotDisturbServer.DNDFMDevice : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ deviceName;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isThisDevice;

- (id)init;
- (void).cxx_destruct;

@end
