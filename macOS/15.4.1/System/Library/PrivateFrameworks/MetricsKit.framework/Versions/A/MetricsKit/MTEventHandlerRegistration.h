@class NSString, NSArray, MTEventHandler;

@interface MTEventHandlerRegistration : MTObject

@property (retain) NSString *registeredName;
@property (retain) Class eventHandlerClass;
@property (retain) NSArray *eventData;
@property (retain) MTEventHandler *eventHandler;

- (void).cxx_destruct;
- (id)initWithMetricsKit:(id)a0 name:(id)a1 class:(Class)a2 eventData:(id)a3;

@end
