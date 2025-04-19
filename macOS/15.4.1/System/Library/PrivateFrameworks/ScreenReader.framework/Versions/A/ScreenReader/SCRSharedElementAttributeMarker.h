@class NSString, SCRCIndexMap;

@interface SCRSharedElementAttributeMarker : NSObject <SCRSharedElementHashMarkerProtocol>

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) SCRCIndexMap *attributes;
@property (readonly, nonatomic) unsigned long long mask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
