@class CPKCharactersSectionStaticView;

@interface CPKAXDataItem : NSObject

@property (readonly) CPKCharactersSectionStaticView *parent;
@property long long section;
@property long long index;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (id)initWithParent:(id)a0 index:(long long)a1 section:(long long)a2;

@end
