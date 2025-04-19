@class NSString, NSError;

@interface LNURLLaunchRequest : NSObject {
    void /* unknown type, empty encoding */ doNotDismissSiriKey;
    void /* unknown type, empty encoding */ storage;
}

@property (nonatomic) void /* unknown type, empty encoding */ dismissSiri;
@property (nonatomic, readonly) NSString *doNotDismissSiriKey;

+ (BOOL)isValidURLForLaunching:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithAction:(id)a0;
- (void)performWithCompletionHandler:(void (^)(NSError *))a0;
- (id)initWithEntity:(id)a0 metadata:(id)a1;
- (id)initWithEnumCaseIdentifier:(id)a0 metadata:(id)a1;
- (void)performValidatingURLScheme:(BOOL)a0 completionHandler:(void (^)(NSError *))a1;

@end
