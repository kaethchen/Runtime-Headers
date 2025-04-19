@class DMManager;

@interface DMRepairDiskPrivVars : NSObject {
    struct __DASession { } *_clientDASession;
    DMManager *_dmManager;
    long long _verb;
}

@end
