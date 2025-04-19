@class NSString, NSSharingServicePicker;
@protocol NSSharingServicePickerToolbarItemDelegate;

@interface NSSharingServicePickerToolbarItem : NSToolbarItem <NSSharingServicePickerDelegate, NSSharingServiceDelegate, NSMenuDelegate>

@property (retain, nonatomic) NSSharingServicePicker *picker;
@property (retain, nonatomic) NSSharingServicePicker *collapsedPicker;
@property (nonatomic) BOOL isShowing;
@property (weak) id<NSSharingServicePickerToolbarItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (void)setView:(id)a0;
- (id)_computeDefaultMenuFormRepresentation;
- (BOOL)_isCustomItemType;
- (void)_superSetView:(id)a0;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (void)share:(id)a0;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingServicePickerCollaborationModeRestrictions:(id)a0;
- (void)validate;

@end
