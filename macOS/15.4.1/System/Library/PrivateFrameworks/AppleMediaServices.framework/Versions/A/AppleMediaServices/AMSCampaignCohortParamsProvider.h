@interface AMSCampaignCohortParamsProvider : NSObject {
    void /* unknown type, empty encoding */ kParamsKey;
    void /* unknown type, empty encoding */ kLastUpdatedKey;
    void /* unknown type, empty encoding */ defaults;
}

+ (id)provider;

- (id)init;
- (void).cxx_destruct;
- (id)retrieveCohortParamsStringPromiseWithBag:(id)a0;

@end
