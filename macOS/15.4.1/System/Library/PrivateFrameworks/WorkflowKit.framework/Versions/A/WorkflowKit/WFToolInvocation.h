@class NSString, WFEncodedTypedValue, WFParameter, NSError, LNAction;
@protocol WFVariableDataSource;

@interface WFToolInvocation : NSObject {
    void /* unknown type, empty encoding */ toolInvocation;
}

@property (class, nonatomic, readonly) NSString *errorDomain;

+ (void)invocationFrom:(LNAction *)a0 bundleIdentifier:(NSString *)a1 deviceIdentifier:(NSString *)a2 completionHandler:(void (^)(WFToolInvocation *, NSError *))a3;

- (id)init;
- (void).cxx_destruct;
- (id)options;
- (BOOL)containsParameterValueForKey:(id)a0;
- (id)encodeAndReturnError:(id *)a0;
- (id)initWithEncodedToolInvocation:(id)a0 error:(id *)a1;
- (void)processedValueFromEncodedValue:(WFEncodedTypedValue *)a0 forParameter:(WFParameter *)a1 ofClass:(Class)a2 variableSource:(id<WFVariableDataSource>)a3 completionHandler:(void (^)(id, NSError *))a4;
- (void)valueForParameter:(WFParameter *)a0 ofClass:(Class)a1 variableSource:(id<WFVariableDataSource>)a2 completionHandler:(void (^)(id, NSError *))a3;

@end
