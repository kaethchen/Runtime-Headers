@class NSString, _NSQuickActionPresentation, NSMutableDictionary;

@interface _NSExtensionQuickActionPreferences : NSObject <_NSQuickActionPreferences> {
    _NSQuickActionPresentation *_presentation;
    NSMutableDictionary *_activeByIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferencesWithPresentation:(id)a0;

- (void).cxx_destruct;
- (id)applyActive:(id)a0;
- (id)initWithPresentation:(id)a0;
- (void)save;
- (void)setActive:(BOOL)a0 forQuickAction:(id)a1;

@end
