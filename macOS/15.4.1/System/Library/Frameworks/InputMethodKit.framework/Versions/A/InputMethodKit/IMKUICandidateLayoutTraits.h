@interface IMKUICandidateLayoutTraits : NSObject

@property (nonatomic) long long alignment;
@property (nonatomic) double candidateLeadingEdge;
@property (nonatomic) double candidateSpacing;
@property (nonatomic) double candidateMinimumSpacing;
@property (nonatomic) double groupHeaderThickness;
@property (nonatomic) double groupHeaderFontSize;
@property (nonatomic) double lineDefaultCount;
@property (nonatomic) double lineDefaultLength;
@property (nonatomic) double maxLengthOfLine;
@property (nonatomic) unsigned long long maxNumberOfElementsPerLine;
@property (nonatomic) double paddingForIndex;
@property (nonatomic) double lineThickness;
@property (nonatomic) BOOL shrinksToFit;
@property (nonatomic) double spaceBetweenCandidates;
@property (nonatomic) double sortingBarFontSize;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double gridSizeFactor;

@end
