@interface VideosUI.ContextMenuInteractor : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ selectedViewModel;
    void /* unknown type, empty encoding */ originatorViewModel;
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ documentController;
    void /* unknown type, empty encoding */ event;
    void /* unknown type, empty encoding */ menuSelectLocation;
    void /* unknown type, empty encoding */ presentingView;
    void /* unknown type, empty encoding */ downloads;
    void /* unknown type, empty encoding */ libContextMenuObserver;
}

- (id)init;
- (void).cxx_destruct;
- (void)didSelectMenuItem:(id)a0;
- (void)menuInteractionDidEnd:(id)a0;

@end
