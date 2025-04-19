@class NSString;

@interface PLCameraDeviceMetadata : NSObject

@property unsigned int deviceId;
@property (retain) NSString *deviceGUId;
@property unsigned int deviceLocation;

- (void).cxx_destruct;

@end
