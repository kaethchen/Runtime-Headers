@class NSString, SCROutputRequest;

@interface SCRDefaultActionInfo : NSObject

@property (retain, nonatomic) NSString *role;
@property (retain, nonatomic) NSString *actionDescription;
@property (retain, nonatomic) NSString *itemDescriptionForEcho;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemBounds;
@property (retain, nonatomic) SCROutputRequest *delayedRequest;
@property (retain, nonatomic) SCROutputRequest *delayedHiddenRequest;
@property (retain, nonatomic) NSString *requestString;
@property (retain, nonatomic) NSString *axIdentifier;

- (void).cxx_destruct;

@end
