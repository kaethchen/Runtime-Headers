@class NSString;

@interface UVCExtensionStateMachineEvent : NSObject

@property (readonly) NSString *name;
@property (readonly) BOOL isEntry;
@property (readonly) id /* block */ action;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 isEntry:(BOOL)a1 eventAction:(id /* block */)a2;

@end
