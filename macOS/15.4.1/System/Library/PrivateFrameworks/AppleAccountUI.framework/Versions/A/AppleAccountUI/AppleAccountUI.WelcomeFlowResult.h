@class NSError;

@interface AppleAccountUI.WelcomeFlowResult : NSObject <AAUIWelcomeFlowResultProviding> {
    void /* unknown type, empty encoding */ error;
}

@property (nonatomic) void /* unknown type, empty encoding */ outcome;
@property (nonatomic, copy) void /* unknown type, empty encoding */ stage;
@property (nonatomic, copy) NSError *error;

- (id)init;
- (void).cxx_destruct;

@end
