@class CALayer;

@interface _NSSnapshotWindowForAnimation : NSPanel

@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) CALayer *snapshotLayer;

- (void).cxx_destruct;
- (id)initForAnimatingWindow:(id)a0;

@end
