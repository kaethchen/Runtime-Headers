@class NSString, NSArray, NSDictionary;

@interface PXStoryColorGradingCubeInfo : NSObject {
    NSDictionary *_backingDict;
}

@property (readonly, nonatomic) NSString *resource;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *tier;
@property (readonly, nonatomic) BOOL isAutoSelectable;
@property (readonly, nonatomic) BOOL isUserSelectable;
@property (readonly, nonatomic) NSArray *categories;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
