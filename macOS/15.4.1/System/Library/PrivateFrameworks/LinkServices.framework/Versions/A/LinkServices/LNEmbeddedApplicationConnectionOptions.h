@class NSString;

@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions <LNApplicationConnectionOptions>

@property (nonatomic) BOOL sceneless;
@property (readonly, nonatomic) BOOL activateSuspended;
@property (nonatomic) long long openApplicationPriority;
@property (nonatomic) BOOL allowsForegroundAppLaunchWhileInCarPlay;
@property (nonatomic) unsigned short actionSource;
@property (copy, nonatomic) NSString *actionSourceOverride;
@property (nonatomic) BOOL isCameraCaptureAction;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
