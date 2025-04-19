@class NSNumber;

@interface SCMLImageSanitizationSignal : NSObject

@property (nonatomic) BOOL safe;
@property (copy, nonatomic) NSNumber *score;
@property (nonatomic) BOOL regionalSensitive;

- (id)init;
- (void).cxx_destruct;

@end
