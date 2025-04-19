@class NSString;

@interface FI_TSimpleStdAlertSheetClient : NSObject <TStdAlertSheetClientProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stdAlertSheetOKButtonPressed;

@end
