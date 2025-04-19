@interface AEConcreteDevicePrimitives : NSObject <AEDevicePrimitives> {
    long long _deviceTypeInternal;
}

@property (readonly, nonatomic) long long deviceType;

- (id)init;

@end
