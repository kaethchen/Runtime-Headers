@class RVPresenter, RVDocumentContext, RVPresentingContext, NSDictionary, RVItem;

@interface RVMenuItem : NSMenuItem {
    RVPresenter *_presenter;
    RVItem *_item;
    RVDocumentContext *_documentContext;
    RVPresentingContext *_presentingContext;
    NSDictionary *_options;
}

@property (nonatomic) BOOL forceLookup;

+ (id)lookupTextForText:(id)a0;

- (void).cxx_destruct;
- (void)_rvMenuItemAction;
- (id)initWithTitle:(id)a0 presenter:(id)a1 item:(id)a2 documentContext:(id)a3 presentingContext:(id)a4 options:(id)a5;
- (long long)tagForType;

@end
