@class NSArray, NSString;

@interface _EXQueryController : NSObject {
    void /* unknown type, empty encoding */ innerController;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) NSArray *extensionIdentities;
@property (nonatomic, readonly) NSArray *queries;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *extensions;

+ (id)executeQuery:(id)a0;
+ (id)executeQueries:(id)a0;
+ (void)executeQueries:(id)a0 completionHandler:(id /* block */)a1;
+ (void)executeQuery:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (id)initWithQueries:(id)a0 delegate:(id)a1;
- (id)initWithQueries:(id)a0;

@end
