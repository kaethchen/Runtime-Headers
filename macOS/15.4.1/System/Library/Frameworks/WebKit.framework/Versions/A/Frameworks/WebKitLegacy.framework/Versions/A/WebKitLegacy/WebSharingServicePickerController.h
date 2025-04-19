@class NSString;

@interface WebSharingServicePickerController : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate> {
    struct WebSharingServicePickerClient { void /* function */ **x0; id x1; } *_pickerClient;
    struct RetainPtr<NSSharingServicePicker> { void *m_ptr; } _picker;
    BOOL _includeEditorServices;
    BOOL _handleEditingReplacement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)menu;
- (void)clear;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 mask:(unsigned long long)a2 proposedSharingServices:(id)a3;
- (void)didShareImageData:(id)a0 confirmDataIsValidTIFFData:(BOOL)a1;
- (id)initWithItems:(id)a0 includeEditorServices:(BOOL)a1 client:(struct WebSharingServicePickerClient { void /* function */ **x0; id x1; } *)a2 style:(long long)a3;
- (id)initWithSharingServicePicker:(id)a0 client:(struct WebSharingServicePickerClient { void /* function */ **x0; id x1; } *)a1;

@end
