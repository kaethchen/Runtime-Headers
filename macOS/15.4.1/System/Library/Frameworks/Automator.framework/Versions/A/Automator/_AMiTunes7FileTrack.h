@class NSURL;

@interface _AMiTunes7FileTrack : _AMiTunes7Track

@property (readonly, copy) NSURL *location;

- (void)refresh;

@end
