@class NSArray;

@interface AVAudioSessionGroup : NSObject

@property (nonatomic) unsigned long long behaviors;
@property (retain, nonatomic) NSArray *sessions;

- (id)init;
- (id)initWithSessions:(id)a0;

@end
