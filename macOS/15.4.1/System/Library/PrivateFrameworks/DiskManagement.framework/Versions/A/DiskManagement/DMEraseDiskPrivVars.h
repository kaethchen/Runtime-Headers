@class DMManager;

@interface DMEraseDiskPrivVars : NSObject {
    struct __DASession { } *_clientDASession;
    DMManager *_dmManager;
}

@end
