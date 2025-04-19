@protocol ABCommand;

@interface ABCommandHookExecutionPolicy : ABCommandExecutionPolicy {
    id<ABCommand> _command;
}

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0;
- (void)runWithBlock:(id /* block */)a0;

@end
