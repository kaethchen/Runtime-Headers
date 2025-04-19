@class NSString, NSImage, CDPDevice;

@interface iCDPEnrollDevice : NSObject <CDPDeviceProtocol>

@property (retain) NSString *localizedName;
@property (retain) NSString *localizedDescription;
@property (retain) NSString *model;
@property (retain) NSString *recordID;
@property (retain) NSImage *deviceIcon;
@property (retain) CDPDevice *cdpDevice;
@property BOOL isCurrentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)localSecretType;

@end
