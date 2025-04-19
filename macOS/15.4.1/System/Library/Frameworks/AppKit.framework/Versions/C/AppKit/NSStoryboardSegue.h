@class NSString;

@interface NSStoryboardSegue : NSObject

@property (copy) id /* block */ prepareHandler;
@property (copy) id /* block */ performHandler;
@property (readonly, copy) NSString *identifier;
@property (readonly) id sourceController;
@property (readonly) id destinationController;

+ (id)segueWithIdentifier:(id)a0 source:(id)a1 destination:(id)a2 performHandler:(id /* block */)a3;

- (id)description;
- (void).cxx_destruct;
- (void)perform;
- (void)_prepare;
- (id)initWithIdentifier:(id)a0 source:(id)a1 destination:(id)a2;

@end
