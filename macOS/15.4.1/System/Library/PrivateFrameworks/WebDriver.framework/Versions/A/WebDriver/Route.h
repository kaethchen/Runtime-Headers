@class NSRegularExpression, NSArray;

@interface Route : NSObject

@property (retain, nonatomic) NSRegularExpression *regex;
@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) NSArray *keys;

- (void).cxx_destruct;

@end
