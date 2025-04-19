@class NUChannelFormat;

@interface NUChannelData : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NUChannelFormat *format;

+ (id)number:(double)a0;
+ (id)composition:(id)a0;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFormat:(id)a0;

@end
