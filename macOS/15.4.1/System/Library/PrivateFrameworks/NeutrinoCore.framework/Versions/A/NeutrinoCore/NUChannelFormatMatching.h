@class NUChannelFormat;

@interface NUChannelFormatMatching : NUChannelMatching

@property (readonly, nonatomic) NUChannelFormat *format;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFormat:(id)a0;
- (BOOL)match:(id)a0;

@end
