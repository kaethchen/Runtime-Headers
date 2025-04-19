@class NSString;

@interface SOTimer : NSObject

@property (retain) NSString *group;
@property (retain) NSString *identifier;
@property (weak) id listener;
@property unsigned long long milliSeconds;
@property SEL selector;

+ (unsigned long long)milliSecondsIntervalForIndex:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMiliSeconds:(unsigned long long)a0 listener:(id)a1 selector:(SEL)a2;
- (id)initWithMiliSeconds:(unsigned long long)a0 listener:(id)a1 selector:(SEL)a2 group:(id)a3;

@end
