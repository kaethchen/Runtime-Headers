@interface SiriAnalyticsDataVault : NSObject {
    void /* unknown type, empty encoding */ containingDirectory;
}

- (id)init;
- (void).cxx_destruct;
- (void)migrate;
- (id)vendAccessFor:(long long)a0 withEntitlements:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 readonly:(BOOL)a3 error:(id *)a4;
- (id)vendedResourceUrlFor:(long long)a0 error:(id *)a1;

@end
