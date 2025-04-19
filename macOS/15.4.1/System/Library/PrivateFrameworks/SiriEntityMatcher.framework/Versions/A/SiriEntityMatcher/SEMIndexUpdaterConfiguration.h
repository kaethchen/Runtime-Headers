@class CCSetChangeRegistry;

@interface SEMIndexUpdaterConfiguration : NSObject

@property (retain, nonatomic) Class updaterClass;
@property (retain, nonatomic) CCSetChangeRegistry *changeRegistry;

- (void).cxx_destruct;

@end
