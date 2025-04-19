@class HMRequestBase, NSError;
@protocol NSCopying, NSObject;

@interface HMResponseBase : NSObject

@property (readonly, nonatomic) HMRequestBase *request;
@property (readonly, nonatomic) id<NSCopying, NSObject> value;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)setRequest:(id)a0;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 value:(id)a1 error:(id)a2;

@end
