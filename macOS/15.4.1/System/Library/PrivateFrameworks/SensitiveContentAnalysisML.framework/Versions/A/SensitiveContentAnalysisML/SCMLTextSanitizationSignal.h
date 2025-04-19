@class NSString, NSNumber;

@interface SCMLTextSanitizationSignal : NSObject

@property (nonatomic) BOOL safe;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *score;
@property (nonatomic) BOOL regionalSensitive;

- (id)init;
- (void).cxx_destruct;

@end
