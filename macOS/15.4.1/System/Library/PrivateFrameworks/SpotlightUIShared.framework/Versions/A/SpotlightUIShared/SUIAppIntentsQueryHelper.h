@class NSString;

@interface SUIAppIntentsQueryHelper : NSObject <SUIAppDependency> {
    void /* unknown type, empty encoding */ searchString;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateSearchString:(NSString *)a0 completionHandler:(void (^)(void))a1;

@end
