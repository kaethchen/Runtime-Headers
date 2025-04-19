@class NSString;

@interface ABSuggestionLogPair : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *value;

+ (id)pairWithLabel:(id)a0 value:(id)a1;

- (void)dealloc;
- (id)initWithLabel:(id)a0 value:(id)a1;

@end
