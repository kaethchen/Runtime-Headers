@interface ConversationKit.LinkShareCoordinator : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ originatingView;
    void /* unknown type, empty encoding */ invalidateWhenCancelled;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ originatingViewOffset;
    void /* unknown type, empty encoding */ sharingServicePicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isMailFirstParty;
}

- (id)init;
- (void).cxx_destruct;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingService:(id)a0 sharedItemsFromProposedItems:(id)a1;

@end
