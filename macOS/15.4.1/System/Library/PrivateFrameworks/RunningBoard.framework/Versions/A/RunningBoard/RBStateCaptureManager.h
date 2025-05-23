@class NSString, NSMutableDictionary, RBSStateCaptureSet, NSObject;
@protocol OS_dispatch_queue;

@interface RBStateCaptureManager : NSObject <RBStateCaptureManaging> {
    NSMutableDictionary *_itemsByIdentifier;
    RBSStateCaptureSet *_itemsWithoutIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (id)identifiers;
- (void)removeItemWithIdentifier:(id)a0;
- (void)addItem:(id)a0 withIdentifier:(id)a1;
- (void)addItemWithTitle:(id)a0 identifier:(id)a1 block:(id /* block */)a2;
- (id)stateForSubsystem:(id)a0;

@end
