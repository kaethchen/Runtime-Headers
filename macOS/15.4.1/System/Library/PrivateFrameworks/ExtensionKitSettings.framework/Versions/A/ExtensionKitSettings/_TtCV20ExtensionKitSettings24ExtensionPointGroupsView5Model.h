@interface _TtCV20ExtensionKitSettings24ExtensionPointGroupsView5Model : NSObject <LSObserverDelegate> {
    void /* unknown type, empty encoding */ firstUpdateComplete;
    void /* unknown type, empty encoding */ coalescedUpdateTask;
    void /* unknown type, empty encoding */ extensionPointGroupsByID;
    void /* unknown type, empty encoding */ innerExtendableApplications;
    void /* unknown type, empty encoding */ _requestedFocus;
    void /* unknown type, empty encoding */ _focus;
    void /* unknown type, empty encoding */ _shouldShowSheet;
    void /* unknown type, empty encoding */ _extensionPointGroups;
    void /* unknown type, empty encoding */ _extendableApplications;
    void /* unknown type, empty encoding */ observer;
}

- (id)init;
- (void).cxx_destruct;
- (void)observerDidObserveDatabaseChange:(id)a0;

@end
