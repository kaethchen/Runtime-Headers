@class NSString;

@interface UINSInputOnboardingModule : NSObject

@property (class, readonly) NSString *name;
@property (class, readonly) NSString *localizedOnboardingTitle;
@property (class, readonly) NSString *localizedOnboardingDescription;
@property (class, readonly) NSString *featureRootLayerName;
@property (class, readonly) BOOL rightAlignLabel;

+ (id)getStringForKeyCode:(unsigned short)a0 modifiers:(unsigned int)a1;

@end
