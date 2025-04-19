@interface iCloudQuota.ICQTaskLimiters : NSObject {
    void /* unknown type, empty encoding */ taskLimiters;
}

- (id)init;
- (void).cxx_destruct;
- (void)performClosureNoParamsWithIdentifier:(id)a0 task:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performWithIdentifier:(id)a0 task:(id /* block */)a1 completion:(id /* block */)a2;

@end
