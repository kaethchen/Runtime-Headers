@class NSArray, NSMutableArray;

@interface PXSectionedLayoutContent : NSObject {
    NSMutableArray *_sections;
}

@property (nonatomic) long long axis;
@property (nonatomic) struct CGSize { double width; double height; } internalContentSize;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)updateSections:(id)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void)addSection:(id)a0;
- (void)insertSection:(id)a0 atIndex:(long long)a1;
- (void)removeSections:(id)a0;
- (void)removeSection:(id)a0;
- (void)_removeSection:(id)a0;
- (void)_addSection:(id)a0;
- (void)_adjustSectionsFromIndex:(long long)a0;
- (void)_exchangeSectionAtIndex:(unsigned long long)a0 withSectionAtIndex:(unsigned long long)a1;
- (void)_insertSection:(id)a0 atIndex:(unsigned long long)a1;
- (void)exchangeSectionAtIndex:(unsigned long long)a0 withSectionAtIndex:(unsigned long long)a1;
- (id)initWithAxis:(long long)a0 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)removeAllSections;

@end
