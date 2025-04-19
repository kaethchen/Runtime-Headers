@class NSString;

@interface WKSharingServicePickerDelegate : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate> {
    void *_menuProxy;
    struct RetainPtr<NSSharingServicePicker> { void *m_ptr; } _picker;
    BOOL _filterEditingServices;
    BOOL _handleEditingReplacement;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceFrame;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } _attachmentID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSharingServicePickerDelegate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPicker:(id)a0;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 mask:(unsigned long long)a2 proposedSharingServices:(id)a3;
- (void)setAttachmentID:(struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; })a0;
- (void *)menuProxy;
- (void)removeBackground;
- (void)setFiltersEditingServices:(BOOL)a0;
- (void)setHandlesEditingReplacement:(BOOL)a0;
- (void)setMenuProxy:(void *)a0;

@end
