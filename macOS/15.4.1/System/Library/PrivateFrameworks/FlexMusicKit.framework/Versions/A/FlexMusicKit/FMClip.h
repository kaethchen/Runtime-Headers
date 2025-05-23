@class NSURL;

@interface FMClip : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long position;
@property (nonatomic) long long offset;
@property (nonatomic) long long duration;
@property (nonatomic) long long fadeInLength;
@property (nonatomic) long long fadeOutLength;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
