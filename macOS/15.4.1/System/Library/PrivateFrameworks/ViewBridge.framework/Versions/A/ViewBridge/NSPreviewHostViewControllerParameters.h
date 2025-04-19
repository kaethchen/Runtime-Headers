@class NSString, NSObject;
@protocol NSSecureCoding;

@interface NSPreviewHostViewControllerParameters : NSObject

@property struct { unsigned int val[8]; } targetAuditToken;
@property long long windowNumber;
@property struct { unsigned char keyness; unsigned char mainness; } windowState;
@property (copy) NSString *targetControllerClassName;
@property (copy) NSObject<NSSecureCoding> *hostAppClientParameters;
@property BOOL allowTargetFrameRequests;

- (id)init;

@end
