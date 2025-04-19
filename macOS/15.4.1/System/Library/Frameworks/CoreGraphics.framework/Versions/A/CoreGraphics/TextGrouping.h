@class NSString, NSArray, CRNormalizedQuad;

@interface TextGrouping : NSObject <CRTextGrouping>

@property (retain) NSString *text;
@property unsigned long long textRegionType;
@property (retain) CRNormalizedQuad *boundingQuad;
@property unsigned long long layoutDirection;
@property (retain) NSArray *subregions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTextElement:(id)a0 text:(id)a1;

@end
