@interface MusicUI.ShareMenuActionProvider : NSObject <NSSharingServicePickerDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ sharingServicePicker;
}

- (id)init;
- (void).cxx_destruct;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;

@end
