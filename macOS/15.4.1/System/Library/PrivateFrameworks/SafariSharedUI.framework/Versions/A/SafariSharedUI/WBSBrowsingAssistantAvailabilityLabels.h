@class NSArray;

@interface WBSBrowsingAssistantAvailabilityLabels : NSObject {
    unsigned long long _previouslyConsumedOptions;
    NSArray *_representedOptions;
    NSArray *_representedOptionsGroups;
    NSArray *_labels;
    NSArray *_icons;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)possibleLabelsForContentOptions:(unsigned long long)a0;

- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)possibleLabelsByIncorporatingContentOptions:(unsigned long long)a0 intoLabelsAfterIndex:(unsigned long long)a1;
- (unsigned long long)representedOptionsAtIndex:(unsigned long long)a0;
- (BOOL)representsSupersetOfContentOptions:(unsigned long long)a0;
- (id)textForOptionsAtIndex:(unsigned long long)a0;
- (id)initWithContentOptions:(unsigned long long)a0 template:(long long)a1;
- (id)initWithRepresentedOptions:(id)a0 groups:(id)a1;

@end
