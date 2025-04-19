@class WFDeferredMenuElementGroup;

@interface WFDeferredMenuItem : NSMenuItem {
    WFDeferredMenuElementGroup *_group;
    BOOL _startedLoading;
    BOOL _forceShowState;
}

- (void).cxx_destruct;
- (void)setMenu:(id)a0;
- (id)initWithGroup:(id)a0 forceShowState:(BOOL)a1;

@end
