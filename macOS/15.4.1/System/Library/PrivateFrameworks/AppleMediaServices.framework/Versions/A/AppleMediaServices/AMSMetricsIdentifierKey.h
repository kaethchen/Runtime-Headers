@class NSString;

@interface AMSMetricsIdentifierKey : NSObject

@property BOOL crossDeviceSync;
@property (retain) NSString *name;
@property BOOL isActiveITunesAccountRequired;

+ (id)keyWithName:(id)a0 crossDeviceSync:(BOOL)a1;
+ (id)keyWithName:(id)a0 crossDeviceSync:(BOOL)a1 isActiveITunesAccountRequired:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;

@end
