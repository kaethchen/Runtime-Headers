@class NSString, NSMutableDictionary, NSDictionary;

@interface IMKUICandidateItemLayout : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *cellDictionary;
@property (retain) NSString *identifier;
@property (retain) NSDictionary *annotationAttributes;
@property (retain) NSDictionary *hintAttributes;
@property (retain) NSDictionary *noCandidatesMessageAttributes;
@property double selectionKeyMargin;
@property (retain) NSDictionary *selectionKeyAttributes;
@property double selectionPadding;
@property (retain) NSDictionary *supplementalAttributes;
@property (retain) NSDictionary *titleAttributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)clearCache;
- (void)setSizeValue:(id)a0 candidateItem:(id)a1;
- (void)setSizeValue:(id)a0 key:(id)a1;
- (id)sizeValueForCandidateItem:(id)a0;

@end
