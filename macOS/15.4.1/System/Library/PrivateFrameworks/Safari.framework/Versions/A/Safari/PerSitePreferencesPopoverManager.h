@class NSString, PerSitePreferencesPopoverViewController, NSArray;

@interface PerSitePreferencesPopoverManager : NSObject <TitleAndStackViewControllerDelegate> {
    PerSitePreferencesPopoverViewController *_preferencesViewController;
    NSArray *_checkBoxStackViewElements;
    NSArray *_popUpStackViewElements;
    NSString *_domain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_createCheckBoxStackViewElements;
- (id)_createPopUpStackViewElements;
- (BOOL)_isShowingPopoverOnSecureSite;
- (void)_reloadPerSitePreferencesView:(id)a0;
- (id)_stackViewElementsFromManager:(id)a0;
- (void)_updateTitleAndStackViewControllerForDomain:(id)a0;
- (void)dismissPopoverIfNecessary;
- (void)titleAndStackViewControllerViewDidDisappear:(id)a0;
- (void)togglePopoverForDomain:(id)a0 popoverIsForSafariWebExtension:(BOOL)a1 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 ofView:(id)a3;

@end
