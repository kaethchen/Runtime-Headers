@class NSArray, NSBundle, NSString, NSView, NSMutableDictionary;

@interface AMBundleAction : AMAction <NSTokenFieldDelegate, NSCopying, NSSecureCoding> {
    NSArray *_topLevelObjects;
    id _reserved;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *_topLevelObjects;
@property (retain, nonatomic) NSBundle *_bundle;
@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSView *view;
@property (weak, nonatomic) NSView *_view;
@property (readonly, nonatomic) BOOL _hasNib;
@property (readonly, nonatomic) BOOL hasView;
@property (retain, nonatomic) NSMutableDictionary *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRuntimeParameters;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundle:(id)a0;
- (BOOL)isViewLoaded;
- (void)awakeFromBundle;
- (id)initWithDefinition:(id)a0 fromArchive:(BOOL)a1;
- (void)_closed;
- (BOOL)_allowsDarkAppearance;
- (id)_findLabelViewForView:(id)a0;
- (id)_getAccessibilityTitleUIElementAttributeForView:(id)a0;
- (id)_itemNameFromString:(id)a0;
- (void)_postLoadView:(id)a0 withStudioScripts:(id)a1;
- (void)_releaseTopLevelObjects;
- (id)_scriptWithContentsOfURL:(id)a0;
- (id)_showWhenRunItems;
- (id)allShowWhenRunItems;
- (BOOL)amAction_supportsParameterObservation;
- (BOOL)canShowSelectedItemsWhenRun;
- (BOOL)isAMBundleAction__;
- (void)loadPropertyList:(id)a0;

@end
