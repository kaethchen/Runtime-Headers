@class NSData, UVCDeviceStreamFormat;

@interface UVCDeviceStreamInterfaceData : NSObject

@property (readonly) NSData *data;
@property (readonly) unsigned long long acquisitionTime;
@property (readonly, weak) UVCDeviceStreamFormat *format;
@property (readonly) unsigned long long frameInterval;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 acquisitionTime:(unsigned long long)a1 format:(id)a2 frameInterval:(unsigned long long)a3;

@end
