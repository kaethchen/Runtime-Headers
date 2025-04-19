@interface AMSOptional : NSObject

@property (readonly) id value;

+ (id)optionalWithNil;
+ (id)optionalWithValue:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
