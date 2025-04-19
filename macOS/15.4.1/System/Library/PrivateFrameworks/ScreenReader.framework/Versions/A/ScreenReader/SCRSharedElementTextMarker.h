@class NSString;

@interface SCRSharedElementTextMarker : NSObject <SCRSharedElementHashMarkerProtocol>

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _titleRange;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
