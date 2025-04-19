@class NSArray, NSError, _TtC7GameKit21GSGameActivitySupport;

@interface GameKit.GSGameActivitySupport : NSObject {
    void /* unknown type, empty encoding */ service;
}

@property (class, nonatomic, readonly) _TtC7GameKit21GSGameActivitySupport *shared;

- (id)init;
- (void).cxx_destruct;
- (void)loadAllForCurrentGameWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;

@end
