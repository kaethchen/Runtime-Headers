@class NSArray, NSMapTable, _FEFocusGroup;
@protocol _FECoordinateSpace;

@interface _FEFocusGroupMap : NSObject <NSCopying> {
    NSMapTable *_environmentToGroupMap;
    NSMapTable *_identifierToGroupMap;
    NSMapTable *_identifierToPrimaryItemMap;
    _FEFocusGroup *_nullGroup;
    NSMapTable *_standInItemsMap;
}

@property (readonly, nonatomic) id<_FECoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) NSArray *focusGroups;
@property (readonly, nonatomic) NSArray *focusItems;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)visualDescription;
- (id)_indexEnvironment:(id)a0;
- (void)_indexItems:(id)a0;
- (id)focusGroupForItem:(id)a0;
- (id)initWithItems:(id)a0 coordinateSpace:(id)a1;
- (id)initWithItems:(id)a0 standInItemsMap:(id)a1 coordinateSpace:(id)a2;

@end
