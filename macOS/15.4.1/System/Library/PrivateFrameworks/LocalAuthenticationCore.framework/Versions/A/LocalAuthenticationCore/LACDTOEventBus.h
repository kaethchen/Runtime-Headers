@class NSString, NSHashTable;

@interface LACDTOEventBus : NSObject <LACDTOEventBus> {
    NSHashTable *_eventHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addEventHandler:(id)a0;
- (void)removeEventHandler:(id)a0;
- (void)dispatchEvent:(id)a0 sender:(id)a1;

@end
