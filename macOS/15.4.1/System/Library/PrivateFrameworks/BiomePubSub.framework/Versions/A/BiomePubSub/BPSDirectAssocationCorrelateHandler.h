@interface BPSDirectAssocationCorrelateHandler : BPSCorrelateHandler {
    id /* block */ _correlating;
}

- (void).cxx_destruct;
- (id)correlateWithCurrentEvent:(id)a0;
- (id)initWithCorrelating:(id /* block */)a0;
- (void)receiveCurrentEvent:(id)a0;
- (void)receivePriorEvent:(id)a0;

@end
