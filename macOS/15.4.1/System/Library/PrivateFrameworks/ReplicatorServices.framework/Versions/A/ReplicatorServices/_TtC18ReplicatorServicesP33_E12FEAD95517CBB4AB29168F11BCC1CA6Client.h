@class NSString;

@interface _TtC18ReplicatorServicesP33_E12FEAD95517CBB4AB29168F11BCC1CA6Client : NSObject <ReplicatorServices.MigrationXPCServer> {
    void /* unknown type, empty encoding */ pid;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)clientDescriptorsAndReturnError:(id *)a0;
- (id)devicesAndReturnError:(id *)a0;
- (BOOL)eraseAndReturnError:(id *)a0;
- (id)localDeviceIDAndReturnError:(id *)a0;
- (id)recordsAndReturnError:(id *)a0;

@end
