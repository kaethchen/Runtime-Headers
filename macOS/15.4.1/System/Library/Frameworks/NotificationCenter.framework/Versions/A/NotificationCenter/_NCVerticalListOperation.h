@class _NCVerticalListContainer;

@interface _NCVerticalListOperation : NSObject

@property (retain, nonatomic) _NCVerticalListContainer *container;
@property (nonatomic) BOOL remove;
@property (nonatomic) unsigned long long animation;

- (id)description;
- (void).cxx_destruct;

@end
