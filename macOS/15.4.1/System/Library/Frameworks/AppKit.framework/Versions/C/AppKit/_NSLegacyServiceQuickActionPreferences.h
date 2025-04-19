@class NSString, NSMutableSet;

@interface _NSLegacyServiceQuickActionPreferences : NSObject <_NSQuickActionPreferences> {
    NSString *_legacyServicePresentationMode;
    NSMutableSet *_legacyServiceActions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferencesWithPresentation:(id)a0;

- (void).cxx_destruct;
- (id)applyActive:(id)a0;
- (id)initWithLegacyServicePresentationMode:(id)a0;
- (void)save;
- (void)setActive:(BOOL)a0 forQuickAction:(id)a1;

@end
