@class NSError;

@interface BPSCompletion : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *error;

+ (id)new;
+ (id)success;
+ (id)failureWithError:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 error:(id)a1;

@end
