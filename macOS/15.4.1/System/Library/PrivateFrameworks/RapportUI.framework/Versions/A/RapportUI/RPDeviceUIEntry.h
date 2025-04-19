@class RPDevice, NSString, NSImage, CUPairedPeer;

@interface RPDeviceUIEntry : NSObject

@property (copy, nonatomic) NSString *bestName;
@property (nonatomic) BOOL connected;
@property (retain, nonatomic) NSImage *deviceImage;
@property (retain, nonatomic) RPDevice *discoveredDevice;
@property (copy, nonatomic) NSString *model;
@property (nonatomic) BOOL paired;
@property (retain, nonatomic) CUPairedPeer *pairedPeer;

- (void).cxx_destruct;

@end
