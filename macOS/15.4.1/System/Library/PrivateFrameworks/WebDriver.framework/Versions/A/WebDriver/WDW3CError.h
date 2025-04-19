@class NSString, NSDictionary;

@interface WDW3CError : NSObject

@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) long long httpStatusCode;
@property (readonly, copy, nonatomic) NSString *errorName;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDictionary *errorData;

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 message:(id)a1;
+ (id)errorFromSessionError:(id)a0;
+ (id)errorWithCode:(long long)a0 data:(id)a1;

- (void).cxx_destruct;
- (id)initWithErrorCode:(long long)a0 message:(id)a1 data:(id)a2;

@end
