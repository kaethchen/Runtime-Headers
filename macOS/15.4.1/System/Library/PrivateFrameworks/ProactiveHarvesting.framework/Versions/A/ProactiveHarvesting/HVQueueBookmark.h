@class NSNumber;
@protocol BMBookmark;

@interface HVQueueBookmark : NSObject

@property (nonatomic) unsigned char los;
@property (retain, nonatomic) id<BMBookmark> pastBookmark;
@property (copy, nonatomic) NSNumber *futureCutoff;
@property (retain, nonatomic) id<BMBookmark> futureBookmark;

- (void).cxx_destruct;
- (void)reset;
- (id)jsonDict;

@end
