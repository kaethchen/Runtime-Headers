@class NSString, NSArray, STMInfoAlert;

@interface STMInfoExtensionRecommendation : NSObject <STMInfoRecommendation, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long state;
@property (retain) NSString *identifier;
@property (copy) NSString *title;
@property (copy) NSString *message;
@property (copy) NSString *secondaryTitle;
@property (copy) NSString *secondaryMessage;
@property (copy) NSString *actionButtonTitle;
@property (retain) NSArray *confirmOptionMenuItems;
@property long long confirmOptionMenuIndex;
@property (retain) STMInfoAlert *confirmation;
@property long long recoverableByteCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
