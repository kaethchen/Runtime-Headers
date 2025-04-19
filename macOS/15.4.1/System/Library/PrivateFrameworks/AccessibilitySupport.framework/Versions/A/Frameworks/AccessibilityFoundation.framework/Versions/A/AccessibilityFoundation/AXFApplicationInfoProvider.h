@class NSMutableDictionary;

@interface AXFApplicationInfoProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

@property (retain, nonatomic) NSMutableDictionary *_infoCache;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)_copyInfoForApplicationWithAsnRef:(struct __LSASN { } *)a0 bundleID:(id)a1 options:(struct { unsigned long long x0; struct CGSize { double x0; double x1; } x1; double x2; })a2;
- (id)_copyNonCachedInfoForApplicationWithAsnRef:(struct __LSASN { } *)a0 bundleID:(id)a1 options:(struct { unsigned long long x0; struct CGSize { double x0; double x1; } x1; double x2; })a2;
- (id)attributedDescriptionForApplicationsInfo:(id)a0 font:(id)a1 scale:(double)a2;
- (id)copyInfoForApplicationWithBundleID:(id)a0 options:(struct { unsigned long long x0; struct CGSize { double x0; double x1; } x1; double x2; })a1;
- (id)copyInfoForApplicationWithProcessID:(int)a0 options:(struct { unsigned long long x0; struct CGSize { double x0; double x1; } x1; double x2; })a1;
- (id)descriptionForApplications:(id)a0;

@end
