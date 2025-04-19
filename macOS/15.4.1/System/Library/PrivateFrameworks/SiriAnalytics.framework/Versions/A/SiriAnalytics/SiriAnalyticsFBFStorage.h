@interface SiriAnalyticsFBFStorage : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0 telemetry:(id)a1;
- (void)store:(id)a0 topic:(id)a1 completion:(id /* block */)a2;

@end
