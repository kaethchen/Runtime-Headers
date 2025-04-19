@class NSArray;

@interface CGVirtualDisplaySettings : NSObject {
    NSArray *_modes;
    double _refreshDeadline;
    BOOL _isReference;
}

@property (nonatomic) double refreshDeadline;
@property (nonatomic) BOOL isReference;
@property (retain, nonatomic) NSArray *modes;
@property (nonatomic) unsigned int hiDPI;
@property (nonatomic) unsigned int rotation;

- (void)dealloc;
- (id)init;

@end
