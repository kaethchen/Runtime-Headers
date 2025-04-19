@class NSURL;

@interface _AMiTunes8FileTrack : _AMiTunes8Track

@property (copy) NSURL *location;

- (void)refresh;

@end
