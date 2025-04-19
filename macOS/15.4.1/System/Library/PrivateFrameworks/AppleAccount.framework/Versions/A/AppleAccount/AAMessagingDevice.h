@class NSString, IDSDevice;

@interface AAMessagingDevice : NSObject {
    IDSDevice *_device;
}

@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *modelIdentifier;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;

@end
