@interface AVAudioUIntegerRange : NSObject

@property (readonly, nonatomic) unsigned long long minimum;
@property (readonly, nonatomic) unsigned long long maximum;

- (id)initWithMin:(unsigned long long)a0 max:(unsigned long long)a1;

@end
