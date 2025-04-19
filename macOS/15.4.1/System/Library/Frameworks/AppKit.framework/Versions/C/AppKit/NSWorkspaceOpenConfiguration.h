@class NSDictionary, NSArray, NSAppleEventDescriptor;

@interface NSWorkspaceOpenConfiguration : NSObject <NSCopying>

@property (copy, setter=_setAdditionalLSOpenOptions:) NSDictionary *_additionalLSOpenOptions;
@property BOOL promptsUserIfNeeded;
@property BOOL addsToRecentItems;
@property BOOL activates;
@property BOOL hides;
@property BOOL hidesOthers;
@property (getter=isForPrinting) BOOL forPrinting;
@property BOOL createsNewApplicationInstance;
@property BOOL allowsRunningApplicationSubstitution;
@property (copy) NSArray *arguments;
@property (copy) NSDictionary *environment;
@property (retain) NSAppleEventDescriptor *appleEvent;
@property int architecture;
@property BOOL requiresUniversalLinks;

+ (id)configuration;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
