@class NSArray;

@interface IMAPAggregateCommand : IMAPCommand

@property (readonly, copy, nonatomic) NSArray *commands;

- (id)init;
- (void).cxx_destruct;
- (long long)composition;
- (void)cleanupAfterCompletion;
- (id)initWithCommands:(id)a0;

@end
