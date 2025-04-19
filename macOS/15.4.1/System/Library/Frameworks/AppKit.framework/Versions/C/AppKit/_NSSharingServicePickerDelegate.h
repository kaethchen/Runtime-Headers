@class NSString, NSSharingServicePicker;

@interface _NSSharingServicePickerDelegate : NSObject <SHKMenuControllerDelegate>

@property (readonly, weak) NSSharingServicePicker *nsSharingServicePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPicker:(id)a0;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 recentSharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 mask:(unsigned long long)a2 proposedSharingServices:(id)a3;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingServicePickerCollaborationModeRestrictions:(id)a0;

@end
