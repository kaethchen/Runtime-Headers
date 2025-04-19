@class NSString, NSMutableArray;

@interface KHThemePreviewLayoutInfo : NSObject <KHThemePreviewInfoProtocol>

@property (retain, nonatomic) NSMutableArray *textFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawRect;
@property (nonatomic) double drawScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoKey;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;

@end
