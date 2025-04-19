@interface IMKDefinitionToLayoutConstraint : NSObject

@property (nonatomic) double maxWidth;
@property (nonatomic) double minWidth;
@property (nonatomic) double maxHeight;
@property (nonatomic) double minHeight;
@property (nonatomic) unsigned long long maxNumberOfCandidatesPerLine;
@property (nonatomic) double minimumCellLineSize;
@property (nonatomic) unsigned long long numberOfSimilarWidthCandidates;
@property (nonatomic) BOOL shouldAddExtraLine;
@property (nonatomic) BOOL optimizedLayoutForFixedSize;

@end
