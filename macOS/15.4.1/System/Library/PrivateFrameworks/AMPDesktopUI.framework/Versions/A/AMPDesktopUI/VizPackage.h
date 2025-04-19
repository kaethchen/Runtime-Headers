@class NSArray;

@interface VizPackage : NSObject

@property (retain, nonatomic) NSArray *pointingTo;
@property (retain, nonatomic) NSArray *pointingFrom;
@property (retain, nonatomic) NSArray *owned;
@property (retain, nonatomic) NSArray *affectingMinX;
@property (retain, nonatomic) NSArray *affectingMinY;
@property (retain, nonatomic) NSArray *affectingWidth;
@property (retain, nonatomic) NSArray *affectingHeight;
@property (retain, nonatomic) NSArray *toDraw;

- (id)init;
- (void).cxx_destruct;

@end
