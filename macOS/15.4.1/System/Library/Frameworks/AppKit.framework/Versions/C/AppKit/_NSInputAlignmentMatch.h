@class NSString, _NSInputAlignmentItem, _NSInputAlignmentGuide;

@interface _NSInputAlignmentMatch : NSObject <NSInputAlignmentMatch> {
    struct CGPoint { double x; double y; } _delta;
    BOOL _alignsX;
    BOOL _alignsY;
    _NSInputAlignmentItem *_item;
    _NSInputAlignmentGuide *_itemRepresentativeGuide;
    _NSInputAlignmentGuide *_alignmentGuide;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
