@class NSString;

@interface SRSSControlCenterSupport_Microphone : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *symbolName;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL automatic;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;

@end
