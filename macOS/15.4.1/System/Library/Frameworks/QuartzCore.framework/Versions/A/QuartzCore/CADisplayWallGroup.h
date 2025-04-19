@class NSArray;

@interface CADisplayWallGroup : NSObject

@property (readonly, nonatomic) unsigned int groupID;
@property (readonly, nonatomic) NSArray *displays;

- (void)dealloc;
- (id)_initWithGroupID:(unsigned int)a0 displays:(id)a1;

@end
