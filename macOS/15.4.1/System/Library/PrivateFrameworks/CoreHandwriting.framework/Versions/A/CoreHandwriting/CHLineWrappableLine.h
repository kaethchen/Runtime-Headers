@class NSUUID, NSString, CRNormalizedQuad, NSLocale;

@interface CHLineWrappableLine : NSObject <CRLineWrappable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long lineWrappingType;
@property (readonly) NSLocale *locale;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *text;
@property (readonly) unsigned long long textRegionType;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) CRNormalizedQuad *boundingQuad;

@end
