@class NSArray, CRListItemMarker, CRNormalizedQuad, NSString;

@interface CRLayoutListItem : NSObject <CRRegion>

@property (retain) NSArray *groups;
@property (retain) CRNormalizedQuad *unionBoundingQuad;
@property (retain) CRListItemMarker *marker;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } markerRange;
@property (readonly) long long markerType;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
