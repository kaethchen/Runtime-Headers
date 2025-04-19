@class SFBeginMapsRoutingCommand;

@interface SearchUIBeginMapsRoutingHandler : SearchUICommandHandler

@property (readonly) SFBeginMapsRoutingCommand *command;

- (id)defaultSymbolName;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;

@end
