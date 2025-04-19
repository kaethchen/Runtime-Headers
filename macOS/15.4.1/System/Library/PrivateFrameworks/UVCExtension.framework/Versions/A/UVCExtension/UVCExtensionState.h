@class NSString, NSMutableSet;

@interface UVCExtensionState : NSObject

@property (retain) NSString *name;
@property (retain) NSMutableSet *pendingEvents;
@property (copy) id /* block */ entryAction;
@property (copy) id /* block */ exitAction;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 entryAction:(id /* block */)a1 exitAction:(id /* block */)a2;

@end
