@class NSMutableDictionary;

@interface AXSSAddRemoveBarCell : NSSegmentedCell

@property (retain, nonatomic) NSMutableDictionary *labelStorage;

- (id)init;
- (void).cxx_destruct;
- (SEL)action;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityLabelForSegment:(long long)a0;

@end
