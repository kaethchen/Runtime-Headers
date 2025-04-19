@class NSString;

@interface AMPSortOption : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long value;

+ (id)optionWithTitle:(id)a0 value:(long long)a1;

- (void).cxx_destruct;

@end
