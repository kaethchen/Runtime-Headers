@class NSDictionary, NSString, IMKCandidateUIStringProperties;

@interface IMKCandidateUIProperties : NSObject {
    double _leftMarginHorizontal;
    double _leftMarginVertical;
    double _candidateLeftMarginHorizontal;
    double _candidateLeftMarginVertical;
}

@property (retain, nonatomic) NSDictionary *dictionary;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long windowCategory;
@property (readonly, nonatomic) IMKCandidateUIStringProperties *annotationStringProperties;
@property (readonly, nonatomic) IMKCandidateUIStringProperties *groupStringProperties;
@property (readonly, nonatomic) IMKCandidateUIStringProperties *guideStringProperties;
@property (readonly, nonatomic) IMKCandidateUIStringProperties *titleStringProperties;
@property (readonly, nonatomic) IMKCandidateUIStringProperties *noCandidatesStringProperties;
@property (readonly, nonatomic) double candidateThickness;
@property (readonly, nonatomic) double minimumCandidateWidthForHorizontal;
@property (nonatomic) double minimumCandidateWidthForHorizontalCompressed;
@property (readonly, nonatomic) double groupBarThickness;
@property (readonly, nonatomic) double selectionViewHeight;
@property (nonatomic) BOOL showsSelectionKeys;
@property (readonly, nonatomic) double leftMargin;
@property (readonly, nonatomic) double candidateLeftMargin;
@property (readonly, nonatomic) double middleMargin;
@property (readonly, nonatomic) double padding;

+ (id)propertiesForIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)valueForKey:(id)a0;

@end
