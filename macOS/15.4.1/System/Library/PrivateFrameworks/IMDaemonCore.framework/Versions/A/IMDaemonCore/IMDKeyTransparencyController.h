@class NSDictionary;

@interface IMDKeyTransparencyController : NSObject {
    void /* unknown type, empty encoding */ app;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) BOOL selfOptedIn;
@property (nonatomic, readonly) NSDictionary *setupInfo;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)optInStateChanged:(id)a0;

@end
