@class NSString;

@interface OSAEventHandlerElement : OSAHandlerElement {
    NSString *_eventHandlerName;
}

+ (id)elementWithName:(id)a0 eventHandlerName:(id)a1 parameters:(id)a2;
+ (id)elementWithName:(id)a0 eventHandlerName:(id)a1;

- (void)dealloc;
- (id)eventHandlerName;
- (BOOL)generateIntoText:(id)a0 indent:(unsigned int)a1;
- (id)initWithName:(id)a0 eventHandlerName:(id)a1;
- (id)initWithName:(id)a0 eventHandlerName:(id)a1 parameters:(id)a2;
- (void)setEventHandlerName:(id)a0;

@end
