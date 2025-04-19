@class NSString, NSButton;

@interface _NSTouchBarCustomizationPreviewDoneButton : NSView <NSCollectionViewElement> {
    NSButton *_doneButton;
}

@property (weak) id target;
@property SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)done:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
