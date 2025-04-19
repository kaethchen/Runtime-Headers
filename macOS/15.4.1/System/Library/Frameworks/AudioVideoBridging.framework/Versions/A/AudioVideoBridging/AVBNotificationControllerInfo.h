@class AVBMACAddress, NSDate;

@interface AVBNotificationControllerInfo : NSObject

@property (retain, nonatomic) AVBMACAddress *macAddress;
@property (retain, nonatomic) NSDate *lastRegistered;
@property (nonatomic) BOOL usingTimedRegistration;

- (void).cxx_destruct;

@end
