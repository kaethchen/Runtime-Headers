@interface MSSenderBlockingTriageAction : MSTriageAction {
    BOOL _blockSender;
}

- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 blockSender:(BOOL)a4;
- (id)_changeAction;

@end
