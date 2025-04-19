@class NSArray, NSUUID, NSString, CRNormalizedQuad;

@interface CHLineWrappableGroup : NSObject <CRLineWrappableGrouping, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL canWrapToNextGroup;
@property (readonly) NSArray *subregions;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) NSString *text;
@property (readonly) unsigned long long textRegionType;
@property (readonly) unsigned long long layoutDirection;

@end
