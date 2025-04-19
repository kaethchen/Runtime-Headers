@class MTBaseEventDataProvider, NSMutableDictionary;

@interface MTEventHandlers : MTObject

@property (retain) MTBaseEventDataProvider *base;
@property (retain) NSMutableDictionary *registrations;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (Class)baseDataProviderClass;
- (void)registerDefaultEventHandlers;
- (void)registerEventHandlerName:(id)a0 eventData:(id)a1;
- (void)registerEventHandlerName:(id)a0 eventHandlerClass:(Class)a1;
- (void)registerEventHandlerName:(id)a0 eventHandlerClass:(Class)a1 eventData:(id)a2;

@end
