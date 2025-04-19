@class SCRElementHashMarker;

@interface _SCRElementHashGroup : NSObject

@property (retain, nonatomic) SCRElementHashMarker *startMarker;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } groupRect;
@property (retain, nonatomic) id nextGroup;

- (void).cxx_destruct;

@end
