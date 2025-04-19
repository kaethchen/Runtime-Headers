@class NSString, ASKScript, NSMutableArray;

@interface ASKScriptController : NSObject <NSCoding> {
    NSString *_scriptName;
    ASKScript *_script;
    NSMutableArray *_eventHandlers;
}

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (void)awakeFromNib;
- (id)script;
- (void)setScript:(id)a0;
- (id)scriptName;
- (id)initWithScript:(id)a0;
- (void)addEventHandler_ask:(id)a0;
- (void)enableEventHandlers:(BOOL)a0;
- (id)eventHandlers_ask;
- (id)executeAppleEvent:(id)a0;
- (void)removeEventHandler_ask:(id)a0;
- (void)setEventHandlers_ask:(id)a0;
- (void)setScriptName:(id)a0;

@end
