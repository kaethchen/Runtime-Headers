@interface ABInstantMessageCollectionViewItem : ABCollectionViewItem

- (void)dealloc;
- (id)services;
- (BOOL)validateMenuItem:(id)a0;
- (void)updateView;
- (BOOL)isServiceActive:(id)a0;
- (void)serviceChanged:(id)a0;
- (id)instantMessageEditView;
- (id)instantMessageView;
- (id)menuItemForService:(id)a0;
- (void)populateEditViewMessagingServiceChooserPopup:(id)a0;
- (id)serviceMenu;

@end
