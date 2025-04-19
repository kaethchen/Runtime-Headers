@class NSString;

@interface VSJSError : NSObject <VSJSError>

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)error;

@end
