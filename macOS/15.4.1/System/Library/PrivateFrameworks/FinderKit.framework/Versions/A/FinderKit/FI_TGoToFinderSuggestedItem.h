@class NSString, NSObject;

@interface FI_TGoToFinderSuggestedItem : FI_TGoToFinderItem <TGoToSuggestedItemProtocol>

@property (nonatomic) BOOL isPrefixMatch;
@property (nonatomic) BOOL isPerfectMatch;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) BOOL isParent;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSString *decomposedRawName;
@property (retain, nonatomic) NSString *decomposedName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL isContainer;
@property (nonatomic) BOOL isShortcut;
@property (retain, nonatomic) NSObject *representedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFENode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 isPrefixMatch:(BOOL)a1 isPerfectMatch:(BOOL)a2 isParent:(BOOL)a3 source:(long long)a4 searchString:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a5;
- (BOOL)isEqualToGoToFinderSuggestedItem:(id)a0;

@end
