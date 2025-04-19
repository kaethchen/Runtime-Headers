@class NSArray;

@interface _AMSystemEventsMovieData : _AMSystemEventsQuickTimeData

@property (readonly, copy) NSArray *bounds;
@property (readonly, copy) NSArray *naturalDimensions;
@property (readonly) long long previewDuration;
@property (readonly) long long previewTime;

@end
