@class NSString;

@interface SCRunningApplicationInternal : NSObject <SCCatalystRunningApplication>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *localizedName;
@property (nonatomic) int processIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProcessID:(int)a0;

@end
