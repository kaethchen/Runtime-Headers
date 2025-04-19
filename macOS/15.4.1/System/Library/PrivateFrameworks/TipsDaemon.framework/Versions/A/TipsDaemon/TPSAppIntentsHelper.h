@class NSString, NSDictionary, NSError;

@interface TPSAppIntentsHelper : NSObject {
    void /* unknown type, empty encoding */ clientLabel;
    void /* unknown type, empty encoding */ source;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchReturnValueFromEntityNamed:(NSString *)a0 inBundleId:(NSString *)a1 withParameters:(NSDictionary *)a2 completionHandler:(void (^)(id, NSError *))a3;
- (void)fetchReturnValueFromIntentNamed:(NSString *)a0 inBundleId:(NSString *)a1 withParameters:(NSDictionary *)a2 completionHandler:(void (^)(id, NSError *))a3;

@end
