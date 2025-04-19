@class NSString;

@interface IRContextRequestOverrides : NSObject

@property (nonatomic) BOOL overrideAppInFocusWindow;
@property (retain, nonatomic) NSString *overrideBundleId;

- (void).cxx_destruct;
- (id)initWithOverrideAppInFocusWindow:(BOOL)a0 overrideBundleId:(id)a1;

@end
