@class NSMutableArray, NSResponder, ASKScriptController;

@interface ASKScriptConnection : NSObject {
    NSResponder *_responder;
    ASKScriptController *_scriptController;
    NSMutableArray *_eventHandlers;
}

- (void)dealloc;
- (id)init;
- (id)initWithController:(id)a0;
- (id)responder;
- (void)setResponder:(id)a0;
- (void)addEventHandler_ask:(id)a0;
- (id)eventHandlers_ask;
- (id)initWithController:(id)a0 responder:(id)a1;
- (void)removeEventHandler_ask:(id)a0;
- (id)scriptController_ask;
- (void)setEventHandlers_ask:(id)a0;
- (void)setScriptController_ask:(id)a0;

@end
