@class NSString, MapsSuggestionsMeCard;
@protocol MapsSuggestionsMeCardReader;

@interface MapsSuggestionsCorrectedMapItemProvider : NSObject <MapsSuggestionsMeCardObserver> {
    MapsSuggestionsMeCard *_meCard;
    id<MapsSuggestionsMeCardReader> _meCardReader;
    id /* block */ _updateHandler;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMeCardReader:(id)a0 handler:(id /* block */)a1;
- (id)mapItemFormShortcutForCNIdentifier:(id)a0;
- (void)meCardReader:(id)a0 didUpdateMeCard:(id)a1;

@end
