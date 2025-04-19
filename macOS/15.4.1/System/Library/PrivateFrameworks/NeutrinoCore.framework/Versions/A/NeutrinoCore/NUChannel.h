@class NSString, NUChannelFormat;

@interface NUChannel : NSObject <NSCopying>

@property (class, readonly, nonatomic) NUChannel *primary;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NUChannelFormat *format;
@property (readonly, nonatomic) long long index;

+ (id)controlChannelWithSchema:(id)a0;
+ (id)disparity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToChannel:(id)a0;
- (id)initWithName:(id)a0 format:(id)a1 index:(long long)a2;
- (BOOL)isCompatibleWithChannel:(id)a0;
- (id)subchannelAtIndex:(unsigned long long)a0;
- (id)subchannelForKey:(id)a0;

@end
