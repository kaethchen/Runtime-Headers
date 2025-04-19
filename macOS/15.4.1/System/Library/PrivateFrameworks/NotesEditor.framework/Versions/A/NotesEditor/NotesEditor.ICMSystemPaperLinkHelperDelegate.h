@interface NotesEditor.ICMSystemPaperLinkHelperDelegate : _TtCs12_SwiftObject <PaperKit.PKPaperLinksViewControllerDelegate> {
    void /* unknown type, empty encoding */ userActivitiesToExclude;
    void /* unknown type, empty encoding */ linkDelegate;
    void /* unknown type, empty encoding */ addLinkClient;
}

- (void)paperLinksViewController:(id)a0 didSelectSynapseLinkItem:(id)a1;
- (id)paperLinksViewControllerExcludedUserActivities:(id)a0;
- (void)paperLinksViewControllerLinksMightHaveChanged:(id)a0;

@end
