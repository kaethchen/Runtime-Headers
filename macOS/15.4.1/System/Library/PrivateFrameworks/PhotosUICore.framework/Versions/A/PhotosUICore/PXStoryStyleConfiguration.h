@class NSString;
@protocol PXStorySongResource, PXStoryAutoEditDecisionList;

@interface PXStoryStyleConfiguration : NSObject <PXStoryStyleDescriptor>

@property (readonly, nonatomic) NSString *originalColorGradeCategory;
@property (readonly, nonatomic) long long customColorGradeKind;
@property (readonly, nonatomic) id<PXStorySongResource> songResource;
@property (readonly, nonatomic) id<PXStoryAutoEditDecisionList> autoEditDecisionList;
@property (readonly, nonatomic) BOOL isCustomized;
@property (readonly, nonatomic) unsigned long long hash;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithCustomizedSongResource:(id)a0;
- (id)copyWithAutoEditDecisionList:(id)a0;
- (id)copyWithCustomizedColorGradeKind:(long long)a0;
- (id)initWithOriginalColorGradeCategory:(id)a0 customColorGradeKind:(long long)a1 songResource:(id)a2 autoEditDecisionList:(id)a3 isCustomized:(BOOL)a4;

@end
