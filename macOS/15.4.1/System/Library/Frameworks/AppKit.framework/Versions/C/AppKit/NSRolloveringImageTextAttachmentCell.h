@class NSLayoutManager, NSString, NSSharingServicePicker, NSTextView, NSMenu, NSRolloveringImageTextAttachmentCellViewProvider;

@interface NSRolloveringImageTextAttachmentCell : NSViewTextAttachmentCell <NSServicesRolloverViewDelegate, NSSharingServiceDelegate, NSSharingServicePickerDelegate> {
    NSLayoutManager *_layoutManager;
    NSTextView *_textView;
    unsigned long long _charIndex;
    NSSharingServicePicker *_picker;
}

@property (readonly, weak) NSTextView *textView;
@property (weak) NSRolloveringImageTextAttachmentCellViewProvider *activeTextAttachmentViewProvider;
@property (readonly) NSTextView *_activeTextView;
@property (retain) NSMenu *menu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)menu;
- (Class)textAttachmentViewProviderClass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_attachmentFrame;
- (void)addView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (void)adjustView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (id)itemsForSharingServices;
- (id)picker;
- (id)pickerForRolloverCalloutView:(id)a0;
- (oneway void)releaseView:(id)a0;
- (void)setMenu:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 containerFrameOnScreenForShareItem:(id)a1;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 mask:(unsigned long long)a2 proposedSharingServices:(id)a3;
- (BOOL)sharingServicePicker:(id)a0 shouldShowForView:(id)a1;
- (id)textView;
- (void)triggerRelayoutOfTextView;
- (id)viewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;

@end
