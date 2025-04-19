@class ABGroupListController, NSString, NSMutableDictionary, ABGroupEntriesList;

@interface ABGroupListAccessoryViewProvider : NSObject <ABAccessoryViewProvider> {
    ABGroupListController *_controller;
    ABGroupEntriesList *_entriesList;
    NSMutableDictionary *_state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)accountStatusDidChange:(id)a0;
- (id)initWithController:(id)a0 entriesList:(id)a1;
- (id)accessoryViewForAccountIdentifier:(id)a0;
- (void)setStatus:(id)a0 forAccount:(id)a1;
- (id)statusForAccount:(id)a0;

@end
