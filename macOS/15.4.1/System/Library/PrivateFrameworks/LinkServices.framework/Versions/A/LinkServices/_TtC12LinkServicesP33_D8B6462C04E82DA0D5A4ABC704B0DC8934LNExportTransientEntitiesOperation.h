@interface _TtC12LinkServicesP33_D8B6462C04E82DA0D5A4ABC704B0DC8934LNExportTransientEntitiesOperation : LNInterfaceConnectionOperation {
    void /* unknown type, empty encoding */ entities;
    void /* unknown type, empty encoding */ exportConfiguration;
    void /* unknown type, empty encoding */ completionHandler;
}

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithIdentifier:(id)a0 connectionInterface:(id)a1 priority:(long long)a2 queue:(id)a3 activity:(id /* block */)a4;

@end
