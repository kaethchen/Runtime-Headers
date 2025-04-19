@class NSString, NSArray;

@interface SCRImage : SCRMapElement {
    NSString *_localizedPhotoEvaluationString;
}

@property (readonly, copy, nonatomic) NSString *embeddedImageDescription;
@property (retain, nonatomic) NSArray *visionEngineFauxChildren;

- (void).cxx_destruct;
- (id)typeDescription;
- (id)children;
- (unsigned long long)childrenCount;
- (BOOL)isInteractive;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)_horizontallyOrderedChildren;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (long long)groupBehavior;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactWithEvent:(id)a0 request:(id)a1 direction:(long long)a2;
- (id)persistentElementLabelData;
- (id)persistentUserLabel;
- (id)persistentUserLabelIDForData:(id)a0;
- (BOOL)shouldMapElement:(id)a0;

@end
