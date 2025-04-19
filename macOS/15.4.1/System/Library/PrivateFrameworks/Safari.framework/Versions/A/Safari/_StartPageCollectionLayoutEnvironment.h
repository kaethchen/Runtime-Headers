@class NSString;

@interface _StartPageCollectionLayoutEnvironment : NSObject <StartPageCollectionLayoutEnvironment> {
    struct { double totalWidth; double minimumHorizontalMargin; double interItemSpacing; struct { long long numberOfColumns; double columnWidth; } columnTypeSmall; struct { long long numberOfColumns; double columnWidth; } columnTypeMedium; struct { long long numberOfColumns; double columnWidth; } columnTypeLarge; BOOL requiresFullRows; BOOL shouldUseContentWidth; } _currentLayoutValues;
}

@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (readonly, nonatomic) double contentWidth;
@property (readonly, nonatomic) double effectiveContentWidth;
@property (readonly, nonatomic) double interItemSpacingWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
