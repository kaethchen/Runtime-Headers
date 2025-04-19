@class NSString;

@interface MPFrameInternal : NSObject

@property (retain, nonatomic) NSString *frameID;
@property (retain, nonatomic) NSString *presetID;

- (void)dealloc;

@end
