@class NSArray, NSString;

@interface AVPlayerItemAVKitCoreData : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *highlightedTimeRanges;
@property (retain, nonatomic) NSString *searchQuery;
@property (nonatomic) BOOL shouldSeekToFirstHighlightedTimeRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
