@class NSString;

@interface MPFilterInternal : NSObject

@property (retain, nonatomic) NSString *filterID;
@property (retain, nonatomic) NSString *presetID;

- (void)dealloc;

@end
