@class NSObject;
@protocol NSSecureCoding;

@interface _UISPlaygroundsPassthroughActionResponse : BSActionResponse {
    NSObject<NSSecureCoding> *_decodedObject;
}

+ (id)responseWithObject:(id)a0;
+ (id)responseWithObject:(id)a0 error:(id)a1;

- (void).cxx_destruct;
- (id)_initWithObject:(id)a0 error:(id)a1;
- (id)decodedObjectOfClass:(Class)a0 error:(id *)a1;

@end
