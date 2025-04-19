@class NSString;

@interface DummyHandlerProvider : NSObject <INIntentHandlerProvidingPrivate>

@property (readonly) id handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHandler:(id)a0;
- (id)handlerForIntent:(id)a0;

@end
