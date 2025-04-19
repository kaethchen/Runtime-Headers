@class NSString;

@interface LNMacApplicationConnectionOptions : LNConnectionOptions <LNApplicationConnectionOptions>

@property (nonatomic, getter=isBackground) BOOL background;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
