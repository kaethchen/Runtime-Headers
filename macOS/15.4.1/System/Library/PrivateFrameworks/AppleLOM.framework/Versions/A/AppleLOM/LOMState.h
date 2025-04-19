@class NSString;

@interface LOMState : NSObject

@property (retain) NSString *name;
@property (copy) id /* block */ entryAction;
@property (copy) id /* block */ exitAction;

- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 entryAction:(id /* block */)a1 exitAction:(id /* block */)a2;

@end
