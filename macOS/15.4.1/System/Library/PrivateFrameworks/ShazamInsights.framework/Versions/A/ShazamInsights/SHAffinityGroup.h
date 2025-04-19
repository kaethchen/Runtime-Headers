@class NSArray, NSMutableArray;

@interface SHAffinityGroup : NSObject

@property (retain) NSMutableArray *mutableMediaItems;
@property (readonly) long long groupType;
@property (readonly) long long cohesionLevel;
@property (readonly) NSArray *mediaItems;

- (id)init;
- (void).cxx_destruct;
- (void)appendMediaItem:(id)a0;
- (id)initWithType:(long long)a0 cohesionLevel:(long long)a1;

@end
