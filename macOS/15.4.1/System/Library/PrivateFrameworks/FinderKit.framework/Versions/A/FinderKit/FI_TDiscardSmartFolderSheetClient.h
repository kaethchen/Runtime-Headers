@class NSString, FI_TBrowserContainerController;

@interface FI_TDiscardSmartFolderSheetClient : NSObject <TStdAlertSheetClientProtocol> {
    struct TNSWeakPtr<FI_TBrowserContainerController> { FI_TBrowserContainerController *fWeakObject; } _weakContainerController;
}

@property (readonly, weak, nonatomic) FI_TBrowserContainerController *containerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientWithContainerController:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stdAlertSheetOtherButtonPressed;
- (void)setContainerController:(id)a0;
- (void)stdAlertSheetCancelButtonPressed;
- (void)stdAlertSheetOKButtonPressed;

@end
