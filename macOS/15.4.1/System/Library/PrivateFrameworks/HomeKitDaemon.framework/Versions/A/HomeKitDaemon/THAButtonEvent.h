@class THAButton;

@interface THAButtonEvent : NSObject

@property (retain, nonatomic) THAButton *button;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)serialize;

@end
