@class NSString;

@interface CaptionCue : NSObject

@property NSString *text;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } PTS;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

@end
