@class NSArray;

@interface GCDeviceSessionConfiguration : NSObject <NSCopying> {
    BOOL _bypassUIKit;
}

@property (copy, nonatomic) NSArray *deviceProviderTypes;
@property (nonatomic) BOOL coalesceRemotes;
@property (nonatomic) BOOL monitorControllerEventsInBackground;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCopyOf:(id)a0;
- (void)setBypassUIKit:(BOOL)a0;
- (BOOL)bypassUIKit;

@end
