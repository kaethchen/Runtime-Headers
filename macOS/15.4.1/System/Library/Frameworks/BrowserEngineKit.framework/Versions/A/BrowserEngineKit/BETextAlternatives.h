@class NSString, NSArray, NSTextAlternatives;

@interface BETextAlternatives : NSObject

@property (readonly, nonatomic) NSTextAlternatives *backingTextAlternatives;
@property (readonly) NSString *primaryString;
@property (readonly) NSArray *alternativeStrings;

- (void).cxx_destruct;
- (id)_initWithNSTextAlternatives:(id)a0;

@end
