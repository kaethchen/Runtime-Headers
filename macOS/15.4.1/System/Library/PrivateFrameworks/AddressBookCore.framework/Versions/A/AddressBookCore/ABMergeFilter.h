@class NSMutableDictionary;

@interface ABMergeFilter : NSObject

@property void /* function */ *equal;
@property void /* function */ *hash;
@property SEL merge;
@property (retain) NSMutableDictionary *dict;

- (void)dealloc;

@end
