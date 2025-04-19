@class NSString, NSArray, CRNormalizedQuad, NSUUID;

@interface CRLayoutParagraph : NSObject <CRLineWrappableGrouping>

@property (retain) CRNormalizedQuad *boundingQuad;
@property (retain) NSString *text;
@property (retain) NSArray *subregions;
@property (retain) NSUUID *uuid;
@property BOOL canWrapToNextGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long textRegionType;
@property (readonly) unsigned long long layoutDirection;

- (void).cxx_destruct;
- (id)initWithLines:(id)a0;

@end
