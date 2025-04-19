@class NSString;

@interface PNPersonParameter : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) double startValue;
@property (nonatomic) double endValue;
@property (nonatomic) double incrementValue;
@property (readonly, nonatomic) BOOL isValid;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
