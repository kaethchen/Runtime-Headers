@class NSURL;

@interface AXKResourceManager : NSObject

@property (readonly, nonatomic) NSURL *soundClickUrl;
@property (readonly, nonatomic) NSURL *soundDoubleClickUrl;
@property (readonly, nonatomic) NSURL *soundTripleClickUrl;

+ (id)shared;

- (id)_bundle;

@end
