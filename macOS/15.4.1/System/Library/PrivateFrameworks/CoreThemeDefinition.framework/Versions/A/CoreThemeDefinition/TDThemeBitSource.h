@class NSString, NSSet;

@interface TDThemeBitSource : NSManagedObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSSet *assets;

- (id)name;
- (void)setName:(id)a0;
- (id)fileURLWithDocument:(id)a0;

@end
